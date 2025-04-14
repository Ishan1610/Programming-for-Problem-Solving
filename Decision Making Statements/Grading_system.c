/*WAP that accepts marks of five subjects and finds percentage and prints grades according to the 
following criteria: 
Between 90-100% --  ‘A’ 
80-90% ------------ ‘B’ 
60-80% ------------ ‘C’ 
Below 60% --------- ‘D’*/

#include <stdio.h>
int main(){
    int marks, a, b, c, d, e;
    printf("Enter marks of 5 subjects: ");
    scanf("%d %d %d %d %d",&a, &b, &c, &d, &e);

    marks = a+b+c+d+e;

    float percentage = (marks/500.00)*100.00;
    printf("Percentage = %.02f \n", percentage);

    if(percentage>=90 && percentage <= 100){
        printf("Grade = A\n");
    }
        else if(percentage >= 80 && percentage < 90){
            printf("Grade = B\n");
        }
        else if(percentage>=60 && percentage <90){
            printf("Grade = C\n");
        }
        else{
            printf("Grade = D\n");
        }
        return 0;
    }
