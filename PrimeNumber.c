#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>		// printf, scanf
#include <stdlib.h>		// system
#include <math.h>		// sqrt
#include <time.h>		// clock_t, clock

void PN1(int num);
void PN2(int num);

clock_t start, finish;
double t1, t2;

int main(void)
{
	int i, j, num;

	printf("Please input a natural number : ");
	scanf("%d", &num);
	printf("%d\n", num);

	PN1(num);
	PN2(num);

	printf("Elapsed time = %.3lf, %.3lf seconds.\n", t1, t2);

	system("pause");

	return 0;
}

void PN1(int num)
{
	int i, j;

	//Naive Algorithm for Prime Number Finding
	start = clock();

	printf("2 ");
	for (i = 2; i <= num; i++) {
		for ( j = 2; j < i; j++) {
			if ((i % j) == 0) break;
			else if(j == i - 1) printf("%d ", i);
		}
	}
	printf("\n");

	finish = clock();
	t1 = (double)(finish -start) / CLOCKS_PER_SEC;
	printf("Elapsed time of Naive algorithm = %.3lf seconds.\n", t1);

}

void PN2(int num)
{
	int i, j;
	
	//Efficient Algorithm for Prime Number Finding
	start = clock();
	
	printf("2 3 ");
	for (i = 2; i <= num; i++) {
		for ( j = 2; j <= (int)sqrt((double)i); j++) {
			if ((i % j) == 0) break;
			else if(j == (int)sqrt((double)i)) printf("%d ", i);
		}
	}
	printf("\n");

	finish = clock();
	t2 = (double)(finish - start) / CLOCKS_PER_SEC;
	printf("Elapsed time of efficient algorithm = %.3lf seconds.\n", t2);

}
