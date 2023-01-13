#include<stdio.h>
void sort (char *ch, int n){
    for (int i=0; i<n-1; i++){
        for (int j=0; j<n-i-1; j++){
            if (ch[j]>ch[j+1]){
                char t = ch [j];
                ch[j]=ch[j+1];
                ch[j+1]=t;
            }
        }
    }
}

int main() {
    char ch[100];
    char s[100];
    fgets (ch,100,stdin);
    fgets (s,100,stdin);
    int i,j;
    for (i=0; ch[i]; i++);
    int k=i;
    for (j=0; s[j]; j++);
    int l=j;
    int f=0;
    if (k!=l){
        printf ("not an anagram");
        return 0;
    }
    else {
        sort (ch,k);
        sort (s,l);
        for (i=0; i<k; i++){
            if (ch[i]!=s[i]){
                f=1; 
                break;
            }
        }
    }
    if (f==0){
        printf ("anagram");
    }
    else {
        printf ("Not an anagram");
    }

}