#include<stdio.h>
void max_min (int a, int b){
    int max,min;
    if (a>b){
        max = a;
        min=b;
    }
    else{
        max= b;
        min = a;
    }
    printf ("max=%d \nmin=%d",max,min);
}
int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    max_min(a,b);
}
