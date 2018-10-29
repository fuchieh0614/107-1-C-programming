#include<stdio.h>

#define MAX 50

void prArr(int m[][MAX],int N)
{
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<N; j++)
        {
            printf("%3d",m[i][j]);
        }
        printf("\n");
    }
}

void magic_Diagonal(int m[][MAX],int N)
{
    int row=N-1;
    int col=N/2;
    m[row][col]=1;
    for(int i=2; i<=N*N; i++)
    {
        if(i%N==1)
        {
            row = (row-1+N)%N;
        }
        else
        {
            col = (col+1+N)%N;
            row = (row+1+N)%N;
        }
        m[row][col]=i;
    }
}

void magic_Knight(int m[][MAX],int N)
{
    int row=N-1;
    int col=N/2;
    m[row][col]=1;
    for(int i=2; i<=N*N; i++)
    {
        if(i%N==1)
        {
            row = (row-1+N)%N;
        }
        else
        {
            col = (col+1+N)%N;
            row = (row-2+N)%N;
        }
        m[row][col]=i;
    }
}

int main()
{
    int m[MAX][MAX]= {0};
    int N=5;
    printf("Diagonal move\n");
    magic_Diagonal(m,N);
    prArr(m,N);
    printf("\n");
    printf("Knight move\n");
    magic_Knight(m,N);
    prArr(m,N);
}
