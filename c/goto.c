// #include <stdio.h>
// int main(){
// 	int i=1,sum=0;
// 	shagun:
	
// 	if (i==11)
// 	goto print;
// 	else
// 	{
// 		sum=sum+i;
// 		i=i+1;
// 		goto shagun;
// 	}
// 	print:
// 	printf("sum of first 10 numbers is: %d",sum);
// 	return 0;
// }


#include <stdio.h>
int main(){
	int n,f=1;
	printf("enter any number: ");
	scanf("%d", &n);
	
	factorial:
		
	if (n>0)
	{
		f=f*n;
		n--;
		goto factorial;
	}
	printf("factorial of given number is: %d",f);
	return 0;
} 


