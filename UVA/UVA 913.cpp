#include <stdio.h>

int main()
{
    long long n;
    while (scanf("%lld",&n)!= EOF) {
        n++;
        printf("%lld\n",3*n*n/2-9);
    }
    return 0;
}
