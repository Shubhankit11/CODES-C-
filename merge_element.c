#include<stdio.h>
int main() {
    int n,m; 
    printf ("enter the size of 1st array :");
    scanf("%d",&n);
    int a[n]; 
    for (int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }

    printf ("enter the size of 2nd array :");
    scanf("%d",&m);
    int b[m],c[m+n];
    for (int i=0; i<m; i++){
        scanf("%d",&b[i]);
    }

    for (int i=0; i<n; i++){
        c[i]=a[i];
    }

    for (int i=n; i<(n+m); i++){
        c[i]= b[i-n];
    }

    for (int i=0; i<(n+m); i++){
        printf ("%d ",c[i]);
    }



}