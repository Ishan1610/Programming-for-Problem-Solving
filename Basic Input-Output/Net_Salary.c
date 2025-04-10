/*Basic salary of an employee is input through the keyboard. The DA is 25% of the basic salary while 
the HRA is 15% of the basic salary. Provident Fund is deducted at the rate of 10% of the gross salary 
(BS+DA+HRA). Program to calculate the Net Salary*/

#include <stdio.h>
#include <math.h>

int main(){
    float Basic_salary, DA, HRA, PF, Net_salary, Gross_Salary;
    scanf("%f", &Basic_salary);

    DA = 0.25*Basic_salary;
    HRA = 0.15*Basic_salary;

    Gross_Salary = Basic_salary + HRA + DA;
    PF = 0.10*Gross_Salary;

    Net_salary = Gross_Salary - PF;

    printf("Basic Salary  : %.2f\n", Basic_salary);
    printf("DA (25%%): %.2f\n", DA);
    printf("HRA (15%%): %.2f\n", HRA);
    printf("Gross Salary: %.2f\n", Gross_Salary);
    printf("Provident Fund: %.2f\n", PF);
    printf("Net Salary: %.2f\n", Net_salary);
    return 0;
}