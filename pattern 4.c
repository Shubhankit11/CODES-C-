# include<stdio.h>
int main() {
    int c=0;
    for (int i=1 ; i<=5; i++){
        for (int j=1; j<=i; j++ ){
            c=c+1;
            printf("%d ",c);
        }
        printf ("\n");
    }
}