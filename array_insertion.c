#include<stdio.h>
int main() {
    int n;
    printf ("Enter the size of array : ");
    scanf("%d",&n);
    int a[n],m,i,ele,pos;
    printf ("Enter the number of element : ");
    scanf("%d",&m);
    for (i=0; i<m; i++){
        scanf ("%d",&a[i]);
    }
    printf ("enter the element which you add : ");
    scanf("%d",&ele);
    printf ("enter the position : ");
    scanf("%d",&pos);
    for (i=m-1; i<=pos; i++){
        a[i+1]=a[i];
    }
        a[pos]=ele;
        m=m+1;
    for (int i=0; i<m; i++){
        printf ("%d ",a[i]);
    }
}