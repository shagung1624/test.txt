// The current year and the year in which the
// employee joined the organization are entered through the
// keyboard. If the number of years for which the employee has
// served the organization is greater than 3 then a bonus of Rs. 2500/-
// is given to the employee. If the years of service are not greater
// than 3, then the program should do nothing.


#include <stdio.h>
int main(){
    int current_year,joining_year,total_years;
    printf("enter current year: ");
    scanf("%d", &current_year);

    printf("enter joining year: ");
    scanf("%d", &joining_year);

    total_years=current_year-joining_year+1;

    if (total_years>3){
        printf("bonus is 2500");
    }
    else{
        printf("no bonus");
    }
    return 0;
}