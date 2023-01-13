// the quick brown fox jumps over the lazy dog.
#include<stdio.h>
int main() {
    char s[100];
    int a[26];
    fgets (s,100,stdin);
    int i;
    for ( i=0; s[i]; i++);
    int k=i;

    for ( i=0; i<k; i++){
        if (s[i]>=97 && s[i]<=122){
            a[s[i]-97]++;
        }
    }

    int f=0;
    for (i=0; i<26; i++){
        if (a[i]==0){
            f=1;
            break;
        }
    }
    if (f==0){
        printf ("pangram");
    }
    else {
        printf ("not");
    }
}