// if a five-digit number is input through the keyboard, write a
// program to calculate the sum of its digits.
// (Hint: Use the modulus operator ‘%’)

#include <stdio.h>
int main(){
    int num,a,sum;
    printf("enter a number: ");
    scanf("%d", &num);
    
    a=num%10;
    sum=sum+a;
    num=num/10;

    a=num%10;
    sum=sum+a;
    num=num/10;

    a=num%10;
    sum=sum+a;
    num=num/10;

    a=num%10;
    sum=sum+a;
    num=num/10;

    a=num%10;
    sum=sum+a;
    num=num/10;


    printf("sum of its digit is %d",sum);
    return 0;
}