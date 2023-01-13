#include <stdio.h>
int main() {
    int x,y;
    scanf ("%d %d",&x,&y);
    if (x>0 && y>0){
        printf ("value in first quadrant");
    }
    else if (x<0 && y>0){
        printf ("value in second quadrant");
    }
    else if (x<0 && y<0){
        printf ("value in third quadrant");
    }
    else if(x>0 && y<0) {
        printf ("value in fourth quadrant");
    }
    else if (x==0){
        printf ("value at X-axis");
    }
    else {
        printf ("value at Y-axis");
    }

    return 0;
}