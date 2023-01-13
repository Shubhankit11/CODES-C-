#include<stdio.h>
#include<math.h>
int main()
{
	long double x1=5698712.333, x2=8318847.65, x3=-4962686.3489;
	printf("truncated value is %Lf \n", truncl(x1));
	printf("truncated value is %Lf \n", truncl(x2));
	printf("truncated value is %Lf \n", truncl(x3));
	return 0;
}
