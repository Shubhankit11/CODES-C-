#include<stdio.h>
int main() {
    int n,m;
    printf ("Enter the row and coloumn : ");
    scanf("%d %d",&n,&m);
    int a[n][m],i,j,d=0;   // 3 2
    printf ("Enter the element : ");
    for (i=0; i<n; i++){
        for (j=0; j<m; j++){
            scanf("%d",&a[i][j]);
            if (i==j)
            d=d+a[i][i];
        }
    }
    

    for (i=0; i<n;i++){    //1
        int sum=0; 
        for (j=0; j<m; j++){     //0
            printf ("%d ",a[i][j]);   //1 1 1 
            sum = sum + a[i][j];    //3
            
        }
        printf ("%d \n",sum);
    }

    for(i=0; i<m; i++){   //1
        int sum =0; 
        for (j=0; j<n; j++){      //0
            sum = sum + a[j][i];    //2 
        }
        printf ("%d ",sum);
    }

    if (n==m)
    printf ("%d",d);
    
}