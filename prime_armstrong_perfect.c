#include<stdio.h>
int p(int p, int q){
    int r=1;
    for (int i=1; i<=q; i++){
        r=r*p;
    }
    return r;
}
void prime (int n){
    int f=0;
    for (int i=2; i<n; i++){
        if (n%i==0){
            f=1;
            break;
        }
    }
    if (f==0){
        printf ("number is Prime");
    }
    else {
        printf ("number is composite");
    }
}
void armstrong (int n){
    int a = n;
    int d = n;
    int b=0;
    while (a>0){
        a=a/10;  
        b++;   
    }
    int c, sum=0; 
    while (n>0){
        c=n%10;
        sum = sum + p(c,b);
        n=n/10;
    }
    if (d==sum){
        printf ("Number is armstrong number.");
    }
    else{
        printf ("invalid number");
    }
}
void perfect(int n){
    int sum =0,a=n;
    for (int i=1; i<n; i++){
        if (n%i==0){
            sum = sum +i;
        }
    }
    if (sum==a){
        printf ("number is perfect number.");
    }
    else{
        printf ("invalid number");
    }
}
int main() {
    int n;
    printf ("1 --> prime\n2 --> armstrong\n3 --> perfect\n4 --> exit\nchoose any integer : ");
    scanf("%d",&n);
    if (n==1){
        int a;
        scanf("%d",&a);
        prime(a);
    }
    else if (n==2){
        int a;
        scanf("%d",&a);
        armstrong(a);
    }
    else if (n==3){
        int a ;
        scanf("%d",&a);
        perfect (a);
    }

}
