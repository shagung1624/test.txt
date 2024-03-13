// while purchasing certain items a discount of 10% is offered if the quantity purchase is more than 1000 if quantity and price per item are input through the keyboard write a program to calculate the total expenses

#include <stdio.h>
int main(){
    int price,total_items,total_price;
    printf("enter price per item: ");
    scanf("%d", &price);

    printf("enter total items: ");
    scanf("%d", &total_items);

    total_price=(price*total_items)-(price*total_items*10/100);

    if (price>1000){
        printf("total expenses are %d",total_price);
    }
    else{
        printf("total expenses without any discount are %d",total_price);
    }

    return 0;
}