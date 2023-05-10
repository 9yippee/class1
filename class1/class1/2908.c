#include <stdio.h>
#pragma warning (disable : 4996)

int main()
{
	int a, b;
	int num1, num2;
	scanf("%d %d", &a, &b);
	num1 = (a % 10 * 100) + (a / 10 % 10 * 10) + (a / 100);
	num2 = (b % 10 * 100) + (b / 10 % 10 * 10) + (b / 100);
	if (num1 > num2)
		printf("%d", num1);
	if (num1 < num2)
		printf("%d", num2);

	return 0;
}