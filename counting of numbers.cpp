#include<stdio.h>
int main()
{
	int num,count=0;
	printf("Enter an integer:");
	scanf("%d", &num);
	while (num!=0)
	{
		num/=10;
		++count;
	}
	printf("Number of digits are: %d", count);
	return 0;
}