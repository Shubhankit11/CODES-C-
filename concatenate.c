#include<stdio.h>
#include<string.h>
int main(){
    char str1[100];
    fgets(str1,100,stdin);
    char str2[100];
    fgets(str2,100,stdin);
    // printf ("%d %d",strlen(str1),strlen(str2));
    char str3[strlen(str1)+strlen(str2)-2];
    for (int  i = 0; str1[i]; i++)
    {
        str3[i]=str1[i];
    }
    for (int  i = 0; str2[i]; i++)
    {
        str3[strlen(str1)-1+i]=str2[i];
    }
    puts (str3);
    return 0;
}