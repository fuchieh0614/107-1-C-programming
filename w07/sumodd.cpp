#include<stdio.h>

int sumodd1(int n)
{
    if(n==1)
    {
        return 1;
    }
    else
        return sumodd1(n-1)+2*n-1;
}

int sumodd2(int n)
{
    if(n==1)
        return 1;
    else if(n%2==1)
        return sumodd2(n-1)+n;
    else if(n%2==0)
        return sumodd2(n-1);
}

int main()
{
    int n;
    while(1)
    {
        printf("Enter n: ");
        scanf("%d",&n);
        if(n==0)break;
        printf("sumodd1(%d)=%d\n",n,sumodd1(n));
        printf("sumodd2(%d)=%d\n\n",n,sumodd2(n));
    }
    return 0;
}
