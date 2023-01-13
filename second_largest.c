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
    int k;
    for (i=1; i<m; i++){
        if (max<a[i]){
            max=a[i];
            k=i;
        }
    }
    for (i=k+1; i<m; i++){
        a[i-1]=a[i];
    }
    m--;
    printf ("[ ");
    for (int i=0; i<m; i++){
        printf ("%d ",a[i]);
    }
    printf (" ]");
    int _max = a[0];
    for (i=1; i<m; i++){
        if (_max<a[i]){
            _max = a[i];
        }
    }
    printf ("\nsecond largest = %d",_max);
    return 0;
}