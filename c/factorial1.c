#include <stdio.h>
int main(){
    int i=1,factorial=1;
    while(i<=5)
    {
        factorial=factorial*i;
        printf("%d",factorial);
        i++;
    }
    return 0;
}