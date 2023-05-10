#include <stdio.h>
#pragma warning (disable : 4996)

int main()
{
	int input, result = 0, cnt;
	int arr[10];

	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &input);
		arr[i] = input % 42;
	}
	
	for (int i = 0; i < 10; i++)
	{
		cnt = 0;
		for (int j = i + 1; j < 10; j++)
		{
			if (arr[i] == arr[j])
				cnt++;
		}
		if (cnt == 0)
			result++;
	}
	printf("%d", result);
}