#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n],i;
    for (i=0; i<n; i++){
        scanf("%d",&a[i]);    //1 3 2 4 7
    }
    for (i=0; i<n-1; i++){  //2
        for (int j=0; j<n-i-1; j++){  //2  2
            if (a[j]>a[j+1]){
            int temp = a[j];
            a[j]=a[j+1];
            a[j+1] = temp;
            }
        }
    }
    printf ("After sorting : ");
    for (i=0; i<n; i++)
    printf ("%d ",a[i]);
}