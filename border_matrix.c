#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n][n],i,j;
    for (i=0; i<n; i++ ){
        for (j=0; j<n; j++){
            scanf("%d",&a[i][j]);
        }
    }

    for (i=0; i<n; i++){
        for (j=0; j<n; j++){
            if (i==0 || i==n-1 || j==0 || j==n-1){
                printf ("%d ",a[i][j]);
            }
            else {
                printf ("  ");
            }
        }
        printf ("\n");
    }
}