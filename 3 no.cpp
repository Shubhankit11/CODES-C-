#include<stdio.h>
int main()
{
	int n,t1,t2,t3;
	scanf("%d",&n);
	t1=0;
	t2=1;
	t3=t1+t2;
	printf("%d%d%d",t1,t2,t3);
	for(int i=4;i<=n;i++)
	{
		t1=t2;
		t2=t3;
		t3=t1+t2;
		printf("%d",t3);
	}
	return 0;
	
}
