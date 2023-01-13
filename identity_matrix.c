#include<stdio.h>
int main() {
    int a[3][3],f=0,g=0;

    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            scanf("%d",&a[i][j]);
        }
    }

    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            if (i==j) {    //(i==j && a[i][j]==1)&&(i!=j && a[i][j])
                if (a[i][j] != 1){
                    f=1; 
                    break;
                }
            }
            if(i!=j) {
                if (a[i][j] != 0){
                    g=1;
                    break;
                }
            }
            
        }
    }

    if (f==0 && g==0){
        printf ("Matrix is identity");
    }
    else {
        printf ("Matrix is not identity");
    }
}