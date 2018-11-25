#include<stdio.h>
#include<stdlib.h>
#include<time.h>

struct Pos{
    int col;
    int row;
};

void prArr(int m[][8]){
    for(int i=0;i<8;i++){
        printf("|-----|-----|-----|-----|-----|-----|-----|-----|\n|");
        for(int j=0;j<8;j++){
            printf("%4d |",m[i][j]);
        }
        printf("\n");
    }
    printf("|-----|-----|-----|-----|-----|-----|-----|-----|\n");
}

Pos findNextBestMove(int m[][8],int access[][8],int row,int col){
    int h[8]={2,1,-1,-2,-2,-1,1,2};
    int v[8]={-1,-2,-2,-1,1,2,2,1};
    Pos pos;
    int nextRow,nextCol;
    int min = 9;
    int minRow=-1, minCol=-1;
    access[row][col] = 0;
    for(int i=0;i<8;i++){
        nextRow = row + v[i];
        nextCol = col + h[i];
        if(nextRow>=0 && nextRow<=7 && nextCol>=0 && nextCol<=7 && access[nextRow][nextCol]>0){
            access[nextRow][nextCol]--;
            if(access[nextRow][nextCol]<min){
                min = access[nextRow][nextCol];
                minRow = nextRow;
                minCol = nextCol;
            }
        }
    }
    pos.row = minRow;
    pos.col = minCol;
    return pos;
}

Pos findNextBestMove2(int m[][8],int access[][8],int row,int col){
    int h[8]={2,1,-1,-2,-2,-1,1,2};
    int v[8]={-1,-2,-2,-1,1,2,2,1};
    Pos pos;
    int nextRow,nextCol;
    int min = 9;
    int minRow=-1, minCol=-1;
    access[row][col] = 0;
    for(int i=7;i>=0;i--){
        nextRow = row + v[i];
        nextCol = col + h[i];
        if(nextRow>=0 && nextRow<=7 && nextCol>=0 && nextCol<=7 && access[nextRow][nextCol]>0){
            access[nextRow][nextCol]--;
            if(access[nextRow][nextCol]<min){
                min = access[nextRow][nextCol];
                minRow = nextRow;
                minCol = nextCol;
            }
        }
    }
    pos.row = minRow;
    pos.col = minCol;
    return pos;
}

int Knight(int row,int col){
    int m[8][8]={0};
    int access[8][8]=
        { 2, 3, 4, 4, 4, 4, 3, 2,
          3, 4, 6, 6, 6, 6, 4, 3,
          4, 6, 8, 8, 8, 8, 6, 4,
          4, 6, 8, 8, 8, 8, 6, 4,
          4, 6, 8, 8, 8, 8, 6, 4,
          4, 6, 8, 8, 8, 8, 6, 4,
          3, 4, 6, 6, 6, 6, 4, 3,
          2, 3, 4, 4, 4, 4, 3, 2
        };
    Pos pos;
    int moves = 1;
    srand(time(NULL));
    printf("Enter row and col for number 1: ");
    scanf("%d %d",&row,&col);
    printf("The board for this test is:\n");
    m[row][col] = 1;
    if(m[3][2]==1){
        for(int i=2;i<=64;i++){
            pos = findNextBestMove2(m,access,row,col);
            if(pos.row==-1 && pos.col==-1){
                break;
            }else{
               m[pos.row][pos.col] = i;
               moves++;
               row = pos.row;
               col = pos.col;
            }
        }
    }else{
        for(int i=2;i<=64;i++){
            pos = findNextBestMove(m,access,row,col);
            if(pos.row==-1 && pos.col==-1){
                break;
            }else{
               m[pos.row][pos.col] = i;
               moves++;
               row = pos.row;
               col = pos.col;
            }
        }
    }
    prArr(m);
    if(moves!=64){
        printf("\nThe tour ended with %d moves.\n",moves);
        printf("This was not a full tour!\n\n");
    }else{
        printf("\nThe tour ended with %d moves.\n",moves);
        printf("This was a full tour!\n\n");
    }
}

int KnightTour(int row,int col){
   int m[8][8]={0};
    int access[8][8]=
        { 2, 3, 4, 4, 4, 4, 3, 2,
          3, 4, 6, 6, 6, 6, 4, 3,
          4, 6, 8, 8, 8, 8, 6, 4,
          4, 6, 8, 8, 8, 8, 6, 4,
          4, 6, 8, 8, 8, 8, 6, 4,
          4, 6, 8, 8, 8, 8, 6, 4,
          3, 4, 6, 6, 6, 6, 4, 3,
          2, 3, 4, 4, 4, 4, 3, 2
        };
    Pos pos;
    int moves = 1;
    srand(time(NULL));
    m[row][col] = 1;
    if(m[3][2]==1){
        for(int i=2;i<=64;i++){
            pos = findNextBestMove2(m,access,row,col);
            if(pos.row==-1 && pos.col==-1){
                break;
            }else{
               m[pos.row][pos.col] = i;
               moves++;
               row = pos.row;
               col = pos.col;
            }
        }
    }else{
        for(int i=2;i<=64;i++){
            pos = findNextBestMove(m,access,row,col);
            if(pos.row==-1 && pos.col==-1){
                break;
            }else{
               m[pos.row][pos.col] = i;
               moves++;
               row = pos.row;
               col = pos.col;
            }
        }
    }
    return moves;
}

int CountAll(int row,int col){
    int m[8][8]={0};
    int counting[8][8];
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            counting[i][j] = KnightTour(i,j);
        }
    }
    prArr(counting);
}

int main(){
    int choice;
    int row,col;
    int m;
    while(1){
        printf("1. Knight Tour by entering position\n");
        printf("2. Check 64 cases\n");
        printf("3. Exit\n");
        printf("=> choice: ");
        scanf("%d",&choice);
        if(choice==3)break;
        switch(choice){
        case 1:
            Knight(row,col);
            break;
        case 2:
            CountAll(row,col);
            break;
        }
    }
}
