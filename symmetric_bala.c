#include<stdio.h>
int main(){
    int a[2][2] = {1,2,3,4};
    int b[2][2] = {1,2,3,4};
    int f=0;

    for (int i=0; i<2; i++){
        for (int j=0; j<2; j++){
            if (a[i][j] != b[i][j]){
                f=1;
                break;
            }
        }
    }

    if (f==0){
        printf ("matrix are symmetric");
    }
    else {
        printf ("matrix are asymmetric");
    }
}