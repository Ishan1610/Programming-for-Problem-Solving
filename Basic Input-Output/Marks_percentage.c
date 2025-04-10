/*WAP that accepts the marks of 5 subjects and finds the sum and percentage marks obtained by the 
student.*/

#include <stdio.h>
#include <math.h>

int main(){
    int a, b, c, d, e;

    printf("Enter the marks of 5 subjects: \n");
    scanf(" %d %d %d %d %d", &a, &b, &c, &d, &e);

    int sum = a + b + c + d + e;
    printf("Sum of marks: %d\n", sum);

    float percentage;
    percentage = (sum/500.00)*100.00;
    printf("Percentage is: %0.2f", percentage);

    return 0;
}