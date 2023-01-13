#include<stdio.h>
int main() {
    int n;
    printf ("size of an array : ");
    scanf("%d",&n);
    int a[n],m,i,c=0,d=0;
    printf ("number of element : ");
    scanf("%d",&m);
    
    for (i=0; i<m; i++){
        scanf("%d",&a[i]);
        if (a[i]%2 == 0){
            c++;
        }
        else {
            d++;
        }
    }

    int e[c],o[d],j,g=0,f=0;
    for (i=0; i<m; i++){
        
        if (a[i] % 2 == 0){
            e[g] = a[i];
            g++;
        }
        if (a[i] % 2 == 1){
            o[f]=a[i];
            f++;
        }
        
    }

    printf ("even : ");
    for (j=0; j<c; j++){
        printf ("%d ",e[j]);
    }
    printf ("\nodd : ");
    for (j=0; j<d; j++){
        printf ("%d ",o[j]);
    }
    return 0;
}