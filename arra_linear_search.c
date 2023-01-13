#include<stdio.h>
int main() {
    int n; 
    scanf("%d",&n);
    int a[n],i,m,ele,flag=0,k;
    printf ("number of element : ");
    scanf("%d",&m);
    printf ("which number you want to search");
    scanf ("%d",&ele);
    for (i=0; i<m ;i++){
        scanf("%d",&a[i]);
        if (a[i] == ele){
            flag =1;
            k=i+1;
        }
    }
    if (flag == 1){
        printf ("Value find !!!\n");
        printf ("at %d position",k);
    }
    else {
        printf ("Value not find !!!");
    }

}