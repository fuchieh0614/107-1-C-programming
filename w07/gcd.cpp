#include<stdio.h>

int gcd(int n1,int n2)
{   int g;
    while(1){
        g=n1;
        n1=n2%g;
        n2=g;
        if(n1==0)break;
    }
    return n2;
}

int rgcd(int n1,int n2)
{
    if(n1==0)
        return n2;
    else
        return rgcd(n2%n1,n1);
}

int gcd1(int n1,int n2)
{   int g=0;
    for(int i=2;i<=n1;i++){
        /*printf("%d ",i);*/
        if(n1%i==0&&n2%i==0)
            g=i;
    }
    printf("\n");
    return g;
}

int main()
{
    int n1,n2;
    while(1)
    {
        printf("Enter n1 n2: ");
        scanf("%d %d",&n1,&n2);
        if(n1==-1||n2==-1)break;
        printf("gcd(%d,%d)=%d\n",n1,n2,gcd(n1,n2));
        printf("rgcd(%d,%d)=%d\n",n1,n2,rgcd(n1,n2));
        printf("gcd1(%d,%d)=%d\n\n",n1,n2,gcd1(n1,n2));
    }
    return 0;
}
