#include<stdio.h>
int p(int a, int b);
int main (){
    int a,b; 
    printf ("enter the base and power : ");
    scanf("%d %d",&a,&b);
    int k= p(a,b);
    printf ("power of %d^%d : %d",a,b,k);
}
int p(int a, int b){
    int c=1;
    for (int i=1; i<=b; i++){
        c=c*a;
    }
    return c;
}