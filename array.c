#include<stdio.h>
int main() {
   int n;
   printf ("Enter the number in a array");
   scanf("%d",&n);
   int a[n];
   int s=0;
   int c=0,d=0;
   for(int i=0; i<n; i++){
    scanf("%d",&a[i]);
    if(a[i] > 0){
        c=c+1;
    }
    if(a[i]<0){
        d=d+1;
    }
   }
   printf ("number of positive number : %d\nnumber of negative number : %d",c,d);
}