#include <stdio.h>
int main() {
    int days;
    printf("Enter the days : ");
    scanf ("%d",days);

    int year;
    year = days/365;
    days = days%365;

    int week;
    week = days/7;
    days = days%7;

    printf ("%d %d %d",year,week,days);

    return 0;

}