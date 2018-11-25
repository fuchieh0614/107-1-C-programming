#include <stdio.h>

int main()
{
    long long n;
    while (scanf("%d",&n)!= EOF) {
        n++;
        printf("%d\n",3*n*n/2-9);
    }
    return 0;
}
