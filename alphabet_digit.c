#include<stdio.h>
int main() {
    char ch;
    printf ("Enter the character : ");
    scanf ("%c",&ch);

    if ((ch>=65 && ch<=90)||(ch>=97 && ch<=122)){
        printf("Given character is an alphabet.");
    }

    else if (ch>=48 && ch<=57){
        printf ("Given character is a digit.");
    }
    else {
        printf ("any special character.");
    }

    return 0;

}