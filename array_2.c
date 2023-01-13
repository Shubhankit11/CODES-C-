#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n],m,i;
    scanf("%d",&m);
    for (i=0; i<m; i++){
        scanf("%d",&a[i]);
    }

    for (i=0; i<m; i++){
        if (a[i]<0){
            printf ("%d ",a[i]);
        }
    }
    return 0;
}