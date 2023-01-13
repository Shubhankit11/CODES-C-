#include <stdio.h>
int main() {
    int amount,a,b,c;
    printf ("enter the amount in multiple of 100 : ");
    scanf ("%d",&amount);
    
    amount = amount - 100;

    a = amount/2000;
    amount = amount%2000;
    printf ("your 2000 note are %d \n",a);

    b = amount/500;
    amount = amount%500;
    printf ("your 500 note are %d \n",b);

    c = amount/100;
    amount = amount%100;
    printf ("your 100 note are %d \n",c+1);

    return 0;
}
