#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],f=0;
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    int val;
    scanf("%d",&val);
    for(int i=0;i<n;i++)
    {
    if(val==a[i])
    printf("%d position \n",i+1);
    }
     if(f==0){
	 
    printf("not found");}
    
    return 0;
}
