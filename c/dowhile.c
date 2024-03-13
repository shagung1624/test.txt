/*
{initialize;
do
{
    printf();
    increment/decrement;
}

}while(condition);*/

#include <stdio.h>
int main(){
    int i=11;
    do{
        printf("%d",i);
        i++;
    }while(i<=10);
    return 0;
}