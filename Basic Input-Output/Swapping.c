/*WAP that swaps values of two variables using a third variable and without using third variable.*/

#include <stdio.h>
#include <math.h>

int main(){

int x, y;
printf("Enter values of x and y: ");
scanf(" %d %d", &x, &y);

int z;
z = x;
x = y;
y = z;

printf("The swapped values of x and y are: %d %d", x, y);
return 0;
}