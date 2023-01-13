#include<stdio.h>
// change particular bit
int main() {
    int n;
    scanf("%d",&n);
    int b;
    scanf("%d",&b);
    int x;
    x=(1<<b)|n;
    printf ("%d",x);
}