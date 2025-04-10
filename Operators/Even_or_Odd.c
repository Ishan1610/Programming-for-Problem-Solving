//WAP that finds whether a given number is even or odd using ternary operator.

#include <stdio.h>

int main(){

    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    (n%2 == 0)? printf("The number is Even") : printf("The number is Odd");

    return 0;
}