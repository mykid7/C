#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, j;

	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= 5; j++)
		{
			printf("%2d * %2d = %2d\t", j, i, j * i);
		}
		printf("\n");
	}
	printf("\n\n");

	for (i = 1; i <= 9; i++)
	{
		for (j = 6; j <= 9; j++)
		{
			printf("%2d * %2d = %2d\t", j, i, j * i);
		}
		printf("\n");
	}

	system("pause");

	return 0;
}