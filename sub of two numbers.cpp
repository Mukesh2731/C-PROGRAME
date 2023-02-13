#include <stdio.h>
int main()
{
	int number1, number2, sub;
	printf("Enter the two integers:");
	scanf("%d %d", &number1, &number2, &sub);
	sub = number1 - number2;
	printf("The sub of two intefers are: %d - %d = %d", number1, number2, sub);
	return 0;
}