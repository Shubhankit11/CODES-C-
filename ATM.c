// write a c program to take an amount as input from user and print notes of 2000, 500, 100 in desending order.
#include <stdio.h>
int main() {
    int amount,a,b,c,d,e,f,g;
    printf ("enter the amount in multiple of 100 : ");
    scanf ("%d",&amount);

    a = amount/2000;
    amount = amount%2000;
    printf ("your 2000 note are %d \n",a);

    b = amount/500;
    amount = amount%500;
    printf ("your 500 note are %d \n",b);

    c = amount/100;
    amount = amount%100;
    printf ("your 100 note are %d \n",c);

    d = amount/50;
    amount = amount % 50;
    printf ("your 50 note are %d \n",d);

    e = amount/20;
    amount = amount % 20;
    printf ("your 20 note are %d \n",e);

    f = amount/10;
    amount = amount % 10;
    printf ("your 10 note are %d \n",f);

    g = amount/5;
    amount = amount % 5;
    printf ("your 5 note are %d \n",g);

    
    return 0;

}