#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, j, dan;
	
	printf("ют╥б╢э : ");
	scanf_s("%d", &dan);
	
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= 5; j++)
		{
			if (j == dan) printf("%2d * %2d = %2d\t", j, i, j * i);
			else if (j == dan * 2) printf("%2d * %2d = %2d\t", j, i, j * i);
			else if (j == dan * 3) printf("%2d * %2d = %2d\t", j, i, j * i);
			else if (j == dan * 4) printf("%2d * %2d = %2d\t", j, i, j * i);
			else if (j == dan * 5) printf("%2d * %2d = %2d\t", j, i, j * i);
			else if (j == dan * 6) printf("%2d * %2d = %2d\t", j, i, j * i);
			else if (j == dan * 7) printf("%2d * %2d = %2d\t", j, i, j * i);
			else if (j == dan * 8) printf("%2d * %2d = %2d\t", j, i, j * i);
			else if (j == dan * 9) printf("%2d * %2d = %2d\t", j, i, j * i);
			else continue;
		}
		printf("\n");
	}
	printf("\n\n");

	for (i = 1; i <= 9; i++)
	{
		for (j = 6; j <= 9; j++)
		{
			if (j == dan) printf("%2d * %2d = %2d\t", j, i, j * i);
			else if (j == dan * 2) printf("%2d * %2d = %2d\t", j, i, j * i);
			else if (j == dan * 3) printf("%2d * %2d = %2d\t", j, i, j * i);
			else if (j == dan * 4) printf("%2d * %2d = %2d\t", j, i, j * i);
			else if (j == dan * 5) printf("%2d * %2d = %2d\t", j, i, j * i);
			else if (j == dan * 6) printf("%2d * %2d = %2d\t", j, i, j * i);
			else if (j == dan * 7) printf("%2d * %2d = %2d\t", j, i, j * i);
			else if (j == dan * 8) printf("%2d * %2d = %2d\t", j, i, j * i);
			else if (j == dan * 9) printf("%2d * %2d = %2d\t", j, i, j * i);
			else continue;
		}
		printf("\n");
	}

	system("pause");

	return 0;
}