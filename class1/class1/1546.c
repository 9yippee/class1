#include <stdio.h>
#pragma warning (disable : 4996)

int main()
{
	int input, N, res = 0, sum = 0;
	double M = 0, avg;
	scanf("%d", &input);
	for (int i = 0; i < input; i++)
	{
		scanf("%d", &N);
		if (N > res)
		{
			res = N;
			sum += res;
		}
		else
		{
			M /= res * 100;
			sum += M;
		}
	}
	avg = sum / 3;
	printf("%d", avg);
}