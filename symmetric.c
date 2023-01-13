#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n][n],i,j,f=0;

    for (i=0; i<n; i++){
        for (j=0; j<n; j++){
            scanf("%d",&a[i][j]);
        }
    }
    for (i=0; i<n; i++){
        for (j=0; j<n; j++){
            if (a[i][j]!=a[j][i]){
                f=1; 
                break;
            }
        }
    }

    if (f==0){
        printf ("matrix is symmetric");
    }
    else {
        printf ("matrix is not symmetric");
    }

   
}
