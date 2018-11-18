#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MAX 100

struct Date{
    int year;
    int month;
    int day;
};

int main(){
    int n;
    Date date;
    Date dates[MAX];
    date.year;
    date.month;
    date.day;
    srand(time(NULL));
    printf("Enter N: ");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        dates[i].year=rand()%11+2010;
        dates[i].month=rand()%12+1;
        dates[i].day=rand()%31+1;
        printf("%d/%02d/%02d\n",dates[i].year,dates[i].month,dates[i].day);
    }

}
