#include<stdio.h>
int main()
{
	int i=1,n;
	printf("enter value of n : ");
	scanf("%d",&n);
	do
	{
		n*i;
		printf("%d \n",i*n);i++;
	}
	while(i<=10);
	return 0;
}
