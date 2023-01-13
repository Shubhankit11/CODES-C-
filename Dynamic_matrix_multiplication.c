#include<stdio.h>

int main() {
    int m,n;
    printf("Enter the row and coloum of 1st matrix : ");
    scanf("%d %d",&m,&n);

    int p,q;
    printf ("Enter the row and coloum of 2nd matrix : ");
    scanf("%d %d",&p,&q);

    if (n!=p){
        printf ("matrix multiplication is not possible.");
        return 0;
    }

    int a[m][n],b[p][q],c[m][q];
    printf ("Enter the element of first matrix : ");
    for (int i=0; i<m; i++){
        for (int j=0 ; j<n; j++){
            scanf("%d",&a[i][j]);
        }
    }

    printf ("Enter the element of second matrix : ");
    for (int i=0; i<p; i++){
        for (int j=0; j<q; j++){
            scanf("%d",&b[i][j]);
        }
    }

    for (int i=0; i<m; i++){     
        for (int j=0; j<q; j++){    
            c[i][j]=0;     
            for (int d=0; d<n; d++){   
                c[i][j] = c[i][j] + (a[i][d]*b[d][j]);
            }
        }
    }

    for (int i=0; i<m; i++ ){
        for (int j=0; j<q; j++){
            printf ("%d ",c[i][j]);
        }
        printf ("\n");
    }

    return 0;
}