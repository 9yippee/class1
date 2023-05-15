#include <stdio.h>
#include <string.h>
#pragma warning (disable : 4996)
int main()
{
	int arr[26];
	char s[100];
	scanf("%s", s);
	int i, j;

	for (int i = 0; i < 26; i++)
		arr[i] = -1;

	for (int i = 97; i < 123; i++)
	{
		for (int j = 0; j < strlen(s); j++)
		{
			if (s[j] == i)
			{
				arr[s[j] - 'a'] = j;
				break;
			}
		}
	}
	for (i = 0; i < 26; i++)
	{
		printf("%d ", arr[i]);
	}
	return(0);
}
