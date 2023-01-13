#include<stdio.h>
void cube(int n){
    int k = n*n*n;
    printf ("%d",k);
}

int main() {
    int n;
    scanf("%d",&n);
    cube(n);
}