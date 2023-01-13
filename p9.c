#include<stdio.h>
int main() {
    int n;
    scanf ("%d",&n);
    for (int i=1; i<=n; i++){   
        int d=i; 
        for (int j=1; j<=i; j++){    
            int c=(n+1)-j; 
            if (j==1){
                printf("%d ",i);
            }
            else  {
                printf ("%d ",d+c);
                d=d+c;
            }
        }
        printf ("\n");
    }
}