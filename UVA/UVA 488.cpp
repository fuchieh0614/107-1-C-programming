#include<stdio.h>
int main()
{
    int n,a,b;
    scanf("%d",&n);
    while(n--)
    {
        if(n==-1)break;
        if(n) printf("\n");
        scanf("%d",&a);
        scanf("%d",&b);
        printf("\n");
        while(b--)
        {
            for(int i=1; i<=a; i++)
            {
                for(int j=0; j<i; j++)
                    printf("%d",i);
                printf("\n");
            }
            for(int i=a-1; i>0; i--)
            {
                for(int j=0; j<i; j++)
                    printf("%d",i);
                printf("\n");
            }
            if(b)printf("\n");
        }
    }
    return 0;
}
