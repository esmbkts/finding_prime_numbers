#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int number, num;

	printf("Enter an integer: ");
	scanf("%d", &number);

	for (num = 2; num < number; num++)
		if (number % num == 0)
			break;

	if (num == number)
		printf("PRIME!");
	else
		printf("NOT prime!");

	return 0;
}
