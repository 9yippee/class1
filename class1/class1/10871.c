#include <stdio.h>
#pragma warning (disable : 4996)

int main()
{
	int N, X, input;

	scanf("%d %d", &N, &X);

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &input);
		if (input < X)
			printf("%d ", input);
	}
	return 0;
}