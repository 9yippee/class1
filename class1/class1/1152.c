#include <stdio.h>
#include <string.h>
#pragma warning (disable : 4996)

int main()
{
	char arr[1000000];
	int i = 0, j = 0, len;

	scanf("%[^\n]", arr);
	len = strlen(arr);

	if (len == 1)
	{
		if (arr[i] == ' ')
		{
			printf("0");
			return (0);
		}
	}
	for (i = 1; i < len - 1; i++)
	{
		if (arr[i] == ' ')
			j++;
	}
	printf("%d", j + 1);

	return (0);
}