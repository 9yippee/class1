#include <stdio.h>
#pragma warning (disable : 4996)

int main()
{
	int input, sum = 1;
	int multi[10] = {0,};

	for (int i = 0; i < 3; i++)
	{
		scanf("%d", &input);
		sum *= input;
	}

	for (int i = 0; sum > 0; i++)
	{
		input = sum % 10;
		multi[input] += 1;
		sum /= 10;
	}

	for (int i = 0; i < 10; i++)
		printf("%d\n", multi[i]);

	return (0);
}