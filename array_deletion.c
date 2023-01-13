#include<stdio.h>
int main() {
    int n;
    printf ("enter the size of array : ");
    scanf("%d",&n);
    int a[n],m,i,pos;
    printf ("enter the number of element : ");
    scanf("%d",&m);
    for (i=0; i<m; i++){
        scanf ("%d",&a[i]);
    }
    printf ("enter the position of number which you want to delete : ");
    scanf ("%d",&pos);

    for (i=pos ; i<m; i++){
        a[i-1]=a[i];
    }
    m--;
    for (i=0 ; i<m; i++){
        printf ("%d ",a[i]);
    }
}