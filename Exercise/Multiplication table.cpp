#include<stdio.h>

int main(){
	for(int j=1;j<=9;j++){
		for(int i=1;i<=9;i++){
			if(i==9)
				printf(" %d*%d=%2d\n",i,j,i*j);
			else if(i*j<=9)
				printf(" %d*%d=%2d",i,j,i*j);
			else if(i*j>9)
				printf(" %d*%d=%d",i,j,i*j);
		}
	}
	return 0;
}
