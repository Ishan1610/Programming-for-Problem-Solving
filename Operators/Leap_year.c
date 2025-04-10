//WAP that tells whether a given year is a leap year or not, using conditional operator.

#include <stdio.h>

int main(){
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    (year % 4 == 0 && year % 100 != 0)
        ? printf("The year is a leap year\n")
        : printf("The year is not a leap year\n");

    return 0;
}