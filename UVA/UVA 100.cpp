#include <stdio.h>

int main()
{
    int a,b,n;
    while(scanf("%d %d",&a,&b)!=EOF){
        int max=0;
        int s,e;
        if(a<b){
            s=a;
            e=b;
        }else{
            s=b;
            e=a;
        }
        for(int i=s; i<=e; i++)
        {
            int length=1;
            int c=i;
            while(c>1)
            {
                if (c%2==0)
                {
                    n=c/2;
                    length++;
                }
                else
                {
                    n=c*3+1;
                    length++;
                }
                if(n==1)
                    break;
                c=n;
            }
            if(length > max)
            {
                max = length;
            }
        }
        printf("%d %d %d\n",a,b,max);
    }
    return 0;
}

