#include<stdio.h>
int fact (int n){
    int f=1;
    for (int i=1; i<=n; i++){
        f = f*i;
    }
    return f;
}

void strong(int a){
    int n=a;
    int b,sum=0;
    while (n>0){
        b=n%10;
        sum = sum + fact(b);
        n=n/10;
    }
    if (sum==a){
        printf ("%d\n",a);
    }
}

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    for (int i=a; i<=b; i++){
        strong (i);
    }
}