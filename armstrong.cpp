#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	scanf("%d",&n);
	int t=n;
	int k=log10(n)+1;
	int r,sum=0;
	{
		while(n>0)
		{
			r=n%10;
			n/=10;
			sum=sum+pow(r,k);
		}
	if(t==sum)
	printf("%d is a armstrong no",t);
	else
	printf("%d is not a armstrong no",t);
	}
	return 0;
}
