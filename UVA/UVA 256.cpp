#include<stdio.h>
#include<math.h>
int main()
{
    long n;
    while(scanf("%d",&n)!=EOF)
    {
        int a;
        if(n==-1)break;
        if(n%2==0)
        {
            a=pow(10,n/2);
        }
        for(int i=0; i<pow(10,n); i++)
        {
            if(i==pow((i/a)+(i%a),2))
            {
                printf("%02d\n",i);
            }
        }
    }
    return 0;
}
