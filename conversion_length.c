#include <stdio.h>

int main() {
    float l;

    printf ("enter the length in cm:");
    scanf ("%f",&l);

    printf ("convert the length in meter : %f \n",l/100);

    printf ("convert the length in kilometer : %f \n",l/100000);

    return 0;
}