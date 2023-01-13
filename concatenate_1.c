#include<stdio.h>
int length (char *ch, int n){
    int i;
    for (i=0; ch[i]; i++);
    int k=i;
    return k;
}

int main() {
    char a[100];
    char b[100];
    scanf ("%[^\n]s",a);
    scanf ("\n%[^\n]s",b);
    int k= length(a,100);
    int l= length (b,100);
    char c[k+l];
    for (int i=0; a[i]; i++){
        c[i]=a[i];
    } 
    for (int i=0; b[i]; i++){
        c[k+i]=b[i];
    }
    c[k+l]='\0';
    puts (c);
}