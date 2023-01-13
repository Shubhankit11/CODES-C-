#include<stdio.h>
#include<string.h>
int main() {
    int f=0;
    char a[1000],b[1000],c[1000];
    fgets (a,1000,stdin);
    int k=strlen(a);
    for (int j=k; j>=0; j--){
        c[j]=a[j];
    }

    for (int i=0; i<k; i++){
        if (c[i]!=a[i]){
            f=1;
            break;
        }
    }
    if (f==0){
        printf ("pallindrome");
    }
    else {
        printf ("not pallindrome");
    }
}