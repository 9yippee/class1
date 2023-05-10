#include <stdio.h>
#pragma warning (disable : 4996)
int main()
{
	int num1, num2, num3, num4, num5;
	int sum = 0;
	scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);
	
	num1 *= num1;
	num2 *= num2;
	num3 *= num3;
	num4 *= num4;
	num5 *= num5;
	
	sum = num1 + num2 + num3 + num4 + num5;
	sum %= 10;
	printf("%d", sum);

	return 0;
}