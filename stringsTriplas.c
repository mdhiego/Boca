#include <stdio.h>
#include <string.h>

void main()
{
	int N, i;
	char str[100][20];

	scanf("%d", &N);
	for (i = 0; i < N; i++)
	{
		scanf(" %s", str[i]);
	}

	for (i = 0; i < N; i+=3)
	{
		if (strcmp(str[i], str[i + 1]) == 0 &&
			strcmp(str[i], str[i + 2]) == 0)
			printf("iguais\n");
		else
			printf("diferentes\n");
	}
}
