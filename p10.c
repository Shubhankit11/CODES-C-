#include<stdio.h>
int main() {
    int c=1;
    printf("enter the number : ");
    int n; 
    scanf ("%d",&n);
    for (int i=n; i>=1; i--){   //4
        for (int j=1; j<=(2*n-1); j++){   //4
            if ((j>=1 && j<=(i-1)) || (j>=(i+c) && j<=(2*n-1))){
                printf ("  ");
            }
            else {
                printf ("* ");   
            }
        }
        c=c+2;
        printf ("\n");
    }
}