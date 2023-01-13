#include<stdio.h>
int main() {
    int a[3][3],b[3][3];
    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            scanf("%d",&a[i][j]);
        }
    }

    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            scanf("%d",&b[i][j]);
        }
    }

    int c[3][3];

    for (int i=0; i<3; i++){   //0
        for (int j=0; j<3; j++){
            c[i][j]=0;
            for (int d=0; d<3; d++){
                c[i][j]=c[i][j]+(a[i][d]*b[d][j]);
            }
        }
    }
    for (int i=0; i<3; i++){
        for (int j=0; j<3 ; j++){
            printf ("%d ",c[i][j]);
        }
        printf ("\n");
    }
}