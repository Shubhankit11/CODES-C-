#include<stdio.h>
int main() {
    int n;
    printf ("size of arrray : ");
    scanf("%d",&n);
    int a[n],m,i,max,min;
    printf ("enter number in array : ");
    scanf("%d",&m);
    printf ("Enter the number : ");
    for (i=0; i<m; i++){
        scanf("%d",&a[i]);  
    }

    max = a[0];
    min = a[0];

    for (i=1; i<m; i++){
        if (max<a[i]){
            max=a[i];
        }
        if (min > a[i]){
            min = a[i];
        }
    }
    printf ("max=%d \nmin=%d",max,min);
    return 0;
}