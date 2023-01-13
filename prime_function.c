#include<stdio.h>
void prime (int a);

int main() {
    int n; 
    scanf("%d",&n);
    prime(n);
}

void prime (int n){
    int t=0;
    for (int i=2; i<n; i++){
        if (n%i == 0){
            t=1;
            break;
        }
    }
    if (t==0){
        printf ("prime");
    }
    else{
        printf ("not");
    }

}