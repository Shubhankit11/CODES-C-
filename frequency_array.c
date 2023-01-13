#include<stdio.h>
#include<limits.h>
//freaquency of array
int main() {
    int n; 
    scanf("%d",&n);
    int a[n],b[10000]={0};
    for (int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }

    int max=a[0];
    for(int i=1; i<n; i++){
        if (max<a[i]){
            max=a[i];
        }
    }
    max++;
    for (int i=0; i<n; i++){
        b[a[i]]++;
    }

    for (int i=0; i<max; i++){
        if (b[i]>0)
        printf ("%d --> %d\n",i,b[i]);
    }
}