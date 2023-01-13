#include<stdio.h>
int main() {
    for (int i=5; i>=1; i--){
        for (int j=1; j<=5; j++){
            if (j>=1 && j<=(i-1)){
                printf ("  ");
            }
            else {
                printf ("%d ",i);
            }
        }
        printf ("\n");
    }
}