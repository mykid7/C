#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int MultiplicationTable(int dan);

int main(void)
{
	int i, j, dan;

	printf("\n\nWhich dan(1~9) do yo want to skip ? ");
	scanf("%d", &dan);
	printf("You typed %d.\n\n", dan);

	for (i = 1; i <= 9; i++) {
		for (j = 1; j <= 5; j++) {
			if (dan == 0) printf("%2d * %2d = %2d   ", j, i, j * i);
			else {
				if (j == dan) continue;
				else printf("%2d * %2d = %2d   ", j, i, j * i);
			}
		}
		printf("\n");
	}
	printf("\n\n");
	
	for (i = 1; i <= 9; i++) {
		for (j = 6; j <= 9; j++) {
			if (dan == 0) printf("%2d * %2d = %2d   ", j, i, j * i);
			else {
				if (j == dan) continue;
				else printf("%2d * %2d = %2d   ", j, i, j * i);
			}
		}
		printf("\n");
	}

	printf("================\n");
	printf("Which dan do you want to display ? ");
	scanf("%d", &dan);

	MultiplicationTable(dan);

	system("pause");

	return 0;
}

int MultiplicationTable(int dan)
{
	int i;

	for (i = 1; i <= 9; i++) {
		printf("%2d * %2d = %2d   ", dan, i, dan * i);
		printf("\n");
	}
}
