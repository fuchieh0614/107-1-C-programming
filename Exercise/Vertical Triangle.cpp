#include <stdio.h>

void prchar(char c, int n)
{
    for(int i=1; i<=n; i++)
        printf("%c",c);
}

void drawVerTri(int n1)
{
    for(int i=1; i<=n1; i++)
    {
        prchar(' ',n1-i);
        prchar('*',i-1);
        printf("*  *");
        prchar('*',i-1);
        printf("\n");
    }
    prchar('-',3*n1);
    printf("\n");
    for(int i=1; i<=n1; i++)
    {
        prchar(' ',i-1);
        prchar('*',n1-i);
        printf("*  *");
        prchar('*',n1-i);
        printf("\n");
    }
    prchar('-',3*n1);
    printf("\n");
    for(int i=1; i<=n1; i++)
    {
        prchar('*',n1-i+1);
        prchar(' ',2*i-1);
        prchar('*',n1-i+1);
        printf("\n");
    }
    prchar('-',3*n1);
    printf("\n");
    for(int i=1; i<=n1; i++)
    {
        prchar('*',i);
        prchar(' ',2*(n1-i)+1);
        prchar('*',i);
        printf("\n");
    }
    prchar('-',3*n1);
    printf("\n");

    for(int i=1; i<=n1; i++)
    {
        prchar(' ',n1-i+1);
        prchar('*',2*i-1);
        prchar(' ',n1-i);
        printf("\n");
    }
    prchar('-',3*n1);
    printf("\n");
    for(int i=1; i<=n1; i++)
    {
        printf(" ");
        prchar(' ',i-1);
        prchar('*',2*(n1-i+1)-1);
        printf("\n");
    }
    prchar('-',3*n1);
    printf("\n");
    for(int i=1; i<=n1; i++)
    {
        if(i==1||i==n1)
        {
            prchar(' ',n1-i);
            prchar('*',i-1);
            printf("*  *");
            prchar('*',i-1);
            printf("\n");
        }
        else
        {
            prchar(' ',n1-i);
            printf("*");
            prchar(' ',i-2);
            printf("*  *");
            prchar(' ',i-2);
            printf("*");
            printf("\n");
        }
    }
    prchar('-',3*n1);
    printf("\n");
    for(int i=1; i<=n1; i++)
    {
        if(i==1||i==n1)
        {
            prchar('*',n1-i);
            prchar(' ',i-1);
            printf("*  *");
            prchar('*',n1-i);
            printf("\n");
        }
        else
        {
            prchar(' ',i-1);
            printf("*");
            prchar(' ',(n1-i)-1);
            printf("*  *");
            prchar(' ',(n1-i)-1);
            printf("*");
            printf("\n");
        }
    }
    prchar('-',3*n1);
    printf("\n");
    for(int i=1; i<=n1; i++)
    {
        if(i==1||i==n1)
        {
            printf("*");
            prchar('*',n1-i);
            prchar(' ',2*i-1);
            prchar('*',n1-i+1);
            printf("\n");
        }
        else
        {
            printf("*");
            prchar(' ',(n1-i)-1);
            printf("*");
            prchar(' ',2*i-1);
            printf("*");
            prchar(' ',(n1-i)-1);
            printf("*");
            printf("\n");
        }
    }
    prchar('-',3*n1);
    printf("\n");
    for(int i=1; i<=n1; i++)
    {
        if(i==1||i==n1)
        {
            printf(" ");
            prchar(' ',n1-i);
            prchar('*',2*i-1);
            printf("\n");
        }
        else
        {
            prchar(' ',n1-i+1);
            printf("*");
            prchar(' ',2*i-3);
            printf("*");
            printf("\n");
        }
    }
    prchar('-',3*n1);
    printf("\n");
    for(int i=1; i<=n1; i++)
    {
        if(i==1||i==n1)
        {
            printf(" ");
            prchar(' ',i-1);
            prchar('*',2*(n1-i)+1);
            printf("\n");
        }
        else
        {

            prchar(' ',i);
            printf("*");
            prchar(' ',2*(n1-i)-1);
            printf("*");
            printf("\n");
        }
    }
    prchar('-',3*n1);
    printf("\n");
    for(int i=1; i<=n1; i++)
    {
        if(i==1||i==n1)
        {
            printf("*");
            prchar('*',i-1);
            prchar(' ',2*(n1-i)+1);
            prchar('*',i);
            printf("\n");
        }
        else
        {
            printf("*");
            prchar(' ',i-2);
            printf("*");
            prchar(' ',2*(n1-i)+1);
            printf("*");
            prchar(' ',i-2);
            printf("*");
            printf("\n");
        }
    }

}
int main()
{
	int n1,chioce;
	while(1)
	{
		printf("1.drawVerTri\n");
		printf("2.exit\n");
		printf("=> ");
		scanf("%d",&chioce);
		if(chioce==2)break;
		switch(chioce)
		{
			case 1:
			    printf("Enter height : ");
			    scanf("%d",&n1);
                drawVerTri(n1);
				break;

		}
	}
	return 0;
}
