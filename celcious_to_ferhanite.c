#include <stdio.h>
int main() {
    float fer, cel;
    printf ("Enter the tempreture in celcious :");
    scanf ("%f",cel);

    fer = cel*(9/5)+32;

    printf("temrature in ferhanite : %0.2f",fer);

    return 0;
}