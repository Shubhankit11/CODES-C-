#include<stdio.h>
int main() {
    char ch[100];
    fgets(ch,100,stdin);
    if (ch[0]>=97 && ch[0]<=122){
        ch[0]=ch[0]-32;
    }
    for (int i=1; ch[i]; i++){
        if (ch[i]==32){
            if (ch[i+1]>=97 && ch[i+1]<=122){
                ch[i+1]=ch[i+1]-32;
            }
        }
    }

    printf ("%s",ch);
}