#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n],m,i,sum=0;
    scanf("%d",&m);

    for (i=0; i<m; i++){
        scanf("%d",&a[i]);
        sum = sum + a[i];
    }
    printf("%d",sum);
}