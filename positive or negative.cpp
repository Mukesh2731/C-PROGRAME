#include<stdio.h>
int main()
{
	double num;
	printf("Enter the number:");
	scanf("%lf", &num);
	if (num <=0){
		if (num == 0)
		printf("You entered number 0");
		else printf("You entered a negative number:");
	}
	else printf("You entered a positive number:");
	return 0;
	
}