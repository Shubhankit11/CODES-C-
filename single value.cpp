#include<stdio.h>
int in ()
{
	int n;
	scanf("%d",&n);
	return n;
}
void print(int n)
{
	printf("%d\n",n);
}
int main()
{
	int a,b,c,d;
    a=in();
    b=in();
    c=in();
    d=in();
    print(a);
    print(b);
    return 0;
}
