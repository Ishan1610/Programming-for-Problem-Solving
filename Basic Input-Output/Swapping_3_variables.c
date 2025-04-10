 //WAP that swaps values of two variables using a third variable and without using third variable. 

 #include <stdio.h>
 #include <math.h>

 int main(){
    int x,y;

    printf("Enter values of x and y: ");
    scanf("%d %d", &x, &y);

    x = x+y;
    y = x-y;
    x = x-y;

    printf("The swapped values of x and y are: %d %d", x,y);

    return 0;
 }