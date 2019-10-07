#include <stdio.h>
#include <stdlib.h>

void print_powers(int num);

int main(void)
{
	int num;

	printf("Enter an integer number : ");
	scanf_s("%d", &num);
	print_powers(num);

	system("pause");

	return 0;
}

void print_powers(int num)
{
	int i;

	for (i = num; i <= num + 5; i++)
	{
		printf("%d\t%d\t%d\n", i, i * i, i * i * i);
	}
}