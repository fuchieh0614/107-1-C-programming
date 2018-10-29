#include<stdio.h>

int fib(int n)
{
    if(n==0||n==1)
        return n;
    else
        return fib(n-1)+fib(n-2);
}


int main()
{
    int n;
    while(1)
    {
        printf("Enter n: ");
        scanf("%d",&n);
        if(n==-1)break;
        printf("fib(%d)=%d\n\n",n,fib(n));
    }
    return 0;
}
