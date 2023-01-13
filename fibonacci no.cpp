#include<stdio.h>
int main()
{
	int i,a=0,b=1,c,n;
	printf("PRINT NO.");
	scanf("%d",&n);
	printf("%d\n%d\n",a,b);
	for(int i=0;i<n;i++)
	{
		c=a+b;
		printf("%d",c);
		printf("\n");
		a=b;
		b=c;
	}
}
