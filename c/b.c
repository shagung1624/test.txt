#include <stdio.h>
int main(){
    int marks;
    printf("enter marks: ");
    scanf("%D", &marks);

    // if (30<marks<=100){
    //     printf("student pass");
    // }
    // else{
    //     printf("student fails");
    // }

    if (90<=marks && marks<=100){
        printf("A+");
    }
    else if(70<=marks && marks<90){
        printf("A");
    }
    else if(30<=marks && marks<70){
        printf("B");
    }
    else{
        printf("C");
    }
    return 0;
}