#include<stdio.h>
int p(int p, int q){
    int r=1;
    for (int i=1; i<=q; i++){
        r=r*p;
    }
    return r;
}
void armstrong (int n){
    int a = n;
    int d = n;
    int b=0;
    while (a>0){
        a=a/10;  //0
        b++;   //3
    }
    int c, sum=0; 
    while (n>0){
        c=n%10;
        sum = sum + p(c,b);
        n=n/10;
    }
    if (d==sum){
        printf ("%d\n",d);
    }
}
int main() {
    int n; 
    scanf("%d",&n);
    int e = p(10,n-1);
    int f = p(10,n);
    for (int i=e; i<f;i++){
        armstrong(i); 
    }
    return 0;
}