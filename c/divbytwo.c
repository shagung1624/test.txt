#include <stdio.h>
int main(){
    int num;
    printf("enter any number: ");
    scanf("%d", &num);

    if (num%2==0)
    printf("yes div by 2");
    
    else {
        printf("not div by 2");
    }
   
    return 0;
}