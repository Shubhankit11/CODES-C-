#include<stdio.h>
int main() {
    int n;
    printf ("size of arrray : ");
    scanf("%d",&n);
    int a[n],m,i,c=0,d=0;
    scanf ("%d",&m);
    for (i=0 ; i<m; i++){
        scanf("%d",&a[i]);
        if (a[i] % 2 == 0){
            c++;
        }
        else {
            d++;
        }
    }
    printf ("even = %d \nodd= %d",c,d);

}