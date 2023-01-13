#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n],b[n];
    for (int i=0; i<n; i++){
        scanf("%d",&a[i]);
        b[i]=a[i];
    }
    
    for (int i=0; i<n; i++){
        printf("%d ",b[i]);
    }

    printf ("\n");
    for (int i=0; i<n; i++){
        printf("%d ",a[i]);
    }
}