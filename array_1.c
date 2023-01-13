#include<stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int a[n],i;
    int m; 
    scanf("%d",&m);
    for (i=0; i<m; i++){
        scanf ("%d",&a[i]);
    }
    for (i=0; i<m; i++){
        printf ("%d ",a[i]);
    }

}

