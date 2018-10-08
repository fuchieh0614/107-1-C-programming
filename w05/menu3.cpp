#include <stdio.h>

int isleap(int year)
{
    if((year%4==0&&!(year%100==0))||year%400==0)
        return 1;
    else
        return 0;
}

int timeconvert(int hh,int mm,int ss)
{
    return 3600*hh+60*mm+ss;
}

int main()
{
    int choice,year,hh,mm,ss,seconds;
    while(1)
    {
        printf("Main Menu\n");
        printf("1.leap\n");
        printf("2.timeconvert\n");
        printf("3.Exit\n");
        printf("=> ");
        scanf("%d",&choice);
        if(choice==3)break;
        switch(choice)
        {
        case 1:
            printf("Enter year: ");
            scanf("%d",&year);
            if(isleap(year))
            {
                printf("Year %d is leap year.\n\n",year);
            }
            else
            {
                printf("Year %d is not leap year.\n\n",year);
            }
            break;
        case 2:
            printf("Enter hh:mm:ss ");
            scanf("%d:%d:%d",&hh,&mm,&ss);
            seconds=timeconvert(hh,mm,ss);
            printf("%02d:%02d:%02d = %d seconds\n\n",hh,mm,ss,seconds);
            break;
        }
    }
    return 0;
}
