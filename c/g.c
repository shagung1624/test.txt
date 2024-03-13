// In a company an employee is paid as under:
// If his basic salary is less than Rs. 1500, then HRA = 10% of basic
// salary and DA = 90% of basic salary. If his salary is either equal to
// or above Rs. 1500, then HRA = Rs. 500 and DA = 98% of basic
// salary. If the employee's salary is input through the keyboard write
// a program to find his gross salary.

#include <stdio.h>
int main(){
    int salary,hra,da,gross_salary;
    printf("enter salry of employee: ");
    scanf("%d", &salary);

    if (salary<1500){
        hra=(salary*10/100);
        da=(salary*90/100);

        printf("house rent allowance is %d",hra);
        printf("\nDA is %d",da);
    } 
    else if(salary>=1500){
        hra=500;
        da=(salary*98/100);

        printf("house rent allowance is %d",hra);
        printf("\nDA is %d",da);

    }
    gross_salary=salary+hra+da;
    printf("\ngross salary of employee is: %d",gross_salary);
    return 0;
}






