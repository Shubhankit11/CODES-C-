#include<stdio.h>
int main() {
    int c=0;
    for (int i=1 ; i<=5; i++){
        for (int j=1; j<=i; j++ ){
            c=c+65;
            printf("%c ",c);
            c=c-64;
        }
        printf ("\n");
    }
}