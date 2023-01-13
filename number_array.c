// write a program to take an arrrau from user and find the position of a user given integer.
#include<stdio.h>
int main() {
    int n;
    printf ("size of an array : ");
    scanf("%d",&n);
    int a[n],i,m,ele;
    scanf ("%d",&m);
    for ( i=0; i<m; i++){
        scanf ("%d",&a[i]);
    }
    printf ("which number you eant to check : ");
    scanf("%d",&ele);
    printf ("position of %d in array : ",ele);
    int c=0;
    for (i=0; i<m; i++){
        if (ele == a[i]){
            c++;
            printf ("%d ",i+1);
        }
    }
    if (c==0){
        printf ("Not Found ");
    }


}