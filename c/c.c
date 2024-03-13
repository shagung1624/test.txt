#include <stdio.h>
int main(){
    char value;
    printf("enter a character: ");
    scanf("%c", &value);

    if(value>='a' && value<='z'){
        printf("lowercase");
    }
    else if(value>='A' && value<='Z'){
        printf("uppercase");
    }
    else{
        printf("not english letter");
    }
    return 0;
}

// armstrong number or not
// natural number or not