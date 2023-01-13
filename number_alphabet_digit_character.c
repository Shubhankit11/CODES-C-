#include<stdio.h>
int main() {
    int a=0,b=0,c=0,d=0;
    char str[1000];
    fgets (str,100,stdin);
    for (int i=0; str[i]; i++){
        if ((str[i]>=65 && str[i]<=90) || (str[i]>=97 && str[i<=122])){
            a++;
        }
        else if (str[i]>=48 && str[i]<=57){
            b++;
        }
        else if (str[i]==32){
            d++;
        }
        else {
            c++;
        }
    }
    printf ("total number of alphabet = %d\ntotal number of digit = %d\nTotal spaces = %d\nTotal number of special character = %d",a,b,d,c-1);
}