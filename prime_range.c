#include<stdio.h>
void rprime (int a,int b){
    for (int i=a; i<=b; i++){
        if (i==1||i==0)
        continue;
        int f=0;
        for (int j=2; j<i; j++){
            if (i%j==0){
                f=1;
                break;
            }
        }
        if (f==0)
        printf ("%d\n",i);
    }
}
int main() {
    int a,b;
    printf ("enter the range : ");
    scanf("%d %d",&a,&b);
    printf ("Prime Numbers between %d to %d : ",a,b);
    rprime(a,b);
}