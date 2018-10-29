#include<stdio.h>
#include<math.h>

int bin2dec(int n,int i)
{
    if(n==0)
        return 0;
    else
        return bin2dec(n/10,i+1)+(n%2)*pow(2,i);
}

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    printf("bin2dec(%d)=%d\n",n,bin2dec(n,0));
    return 0;
}
