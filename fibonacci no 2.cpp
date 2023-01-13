#include<stdio.h>
int main()
{
	int a=0,b=1,c,n;
	printf("PRINT NO");
	scanf("%d",&n);
    while(a<=n)
	{
		printf("%d",a);
		c=a+b;
		a=b;
		b=c;
	}
}
