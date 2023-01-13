#include<stdio.h>
void dca(int r){
    int d= 2*r;
    float c= 2*3.14*r;
    float a= 3.14*r*r;
    printf ("diameter=%d\ncircumference=%0.2f\narea=%0.2f",d,c,a);
}
int main() {
    int r;
    scanf("%d",&r);
    dca(r);
}