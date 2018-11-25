#include<stdio.h>
#define MAX 10000

int n,a[MAX] ;

int main()
{
    n=0;
    while (scanf("%d",&a[n++])!=EOF)
    {
        if (n%2==1)
        {
            printf("%d\n",a[n/2]);
        }
        else
        {
            printf("%d\n",( a[n/2]+a[n/2-1])/2);
        }
    }
    return 0;
}
