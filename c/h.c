// The marks obtained by a student in 5 different
// subjects are input through the keyboard. The student gets a
// division as per the following rules:
// Percentage above or equal to 60 - First division
// Percentage between 50 and 59 - Second division
// Percentage between 40 and 49 - Third division
// Percentage less than 40 - Fail
// Write a program to calculate the division obtained by the student.

#include <stdio.h>
int main(){
    int s1,s2,s3,s4,s5,sum,per;
    printf("enter marks in 1st subject: ");
    scanf("%d", &s1);
    printf("enter marks in 2nd subject: ");
    scanf("%d", &s2);
    printf("enter marks in 3rd subject: ");
    scanf("%d", &s3);
    printf("enter marks in 4th subject: ");
    scanf("%d", &s4);
    printf("enter marks in 5th subject: ");
    scanf("%d", &s5);

    sum=s1+s2+s3+s4+s5;
    per=(sum*100/500);

    if (per>=60){
        printf("first division");
    }

    else if(per>=50 && per<=59){
        printf("second division");
    }

    else if(per>=40 &&per<=49){
        printf("third division");
    }

    else if(per<40){
        printf("fail");
    }

    return 0;

}