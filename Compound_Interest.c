#include <stdio.h>
#include <math.h>
int main() {
    double principal,rate,time; double A,B,C;
    printf ("Enter the principal, rate, time for compound interest :");
    scanf ("%lf %lf %lf",&principal,&rate,&time);

    A = (1+rate/100);
    B = pow(A,time);
    C = principal*B;

    printf("Compound Interest : %lf",C);
}