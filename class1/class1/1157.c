#include <stdio.h>
#include <string.h>
#pragma warning (disable : 4996)

int main()
{
	char input[1000000], ans;
	int arr[26], max = 0, size;

	scanf("%s", input);
	size = strlen(input);

	for (int i = 0; i < size; i++)
	{
		if (input[i] >= 'a')
		{
			arr[input[i] - 'a']++;
		}
		else
		{
			arr[input[i] - 'A']++;
		}
	}

	for (int i = 0; i < 26; i++)
	{
		if (arr[i] == max)
		{
			ans = '?';
		}
		else if (arr[i] > max)
		{
			max = arr[i];
			ans = 'A' + i;
		}
	}
	printf("%c", ans);

	return 0;
}