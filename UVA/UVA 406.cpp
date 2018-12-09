#include<stdio.h>
#include<math.h>

int isprime(int a)

{
    int i;
    for(i=2; i<=sqrt(a); i++)
    {
        if(a%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int i,j=1,n,c,a[500],count;
    a[0]=1;
    for(i=2; i<1000; i++)
    {
        if(isprime(i))
        {
            a[j]=i;
            j++;
        }
    }
    while(scanf("%d%d",&n,&c)==2)
    {
        count=0;
        printf("%d %d:",n,c);
        for(i=0; a[i]<=n; i++)
        {
            count++;
        }
        if(c>(count+1)/2)
        {
            c=(count+1)/2;
        }
        if(count%2==0)
        {
            for(j=count/2 -c; j<=count/2 + c-1; j++)
            {
                printf(" %d",a[j]);
            }
            printf("\n\n");
        }
        else
        {
            for(j=count/2 -(c-1); j<=count/2 + c-1; j++)
            {
                printf(" %d",a[j]);
            }
            printf("\n\n");
        }
    }
    return 0;
}
