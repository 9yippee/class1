#include <stdio.h>
#include <string.h>
#pragma warning (disable : 4996)
int main()
{
	char c = 'a';
	char arr[100] = { 0, };
	scanf("%s", arr);
	int len = strlen(arr);

	for (int i = 0; i < 26; i++)
		arr[i] = -1;

	for (int i = 97; i < 123; i++)
	{
		for (int j = 0; j < len; j++)
		{
			if (arr[j] == i)
			{
				arr[arr[j] - 'a'] = j;
				break;
			}
		}
	for (i = 0; i < 26; i++)
	{
		printf("%d ", arr[i]);
	}
}
	return 0;
}