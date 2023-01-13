#include<stdio.h>
int main() {
    float a; int b;
    printf ("Enter the two number :");

    scanf ("%f %d",&a,&b);

    printf ("sum : %0.1f \n",a+b);

    printf ("multiply : %0.1f \n",a*b);

    printf ("divide : %0.1f \n",a/b);

    printf ("subtraction : %0.1f \n",a-b);

    return 0;
}