#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>		// printf, scanf
#include <stdlib.h>		// system
#include <math.h>		// sqrt
#include <time.h>		// clock_t, clock

void PN1(int num);
void PN2(int num);
void PN3(int num);
void PN4(int num);

clock_t start, finish;
double t1, t2, t3, t4;

int main(void)
{
	int i, j, num, buttom;
	
	printf("Please input a natural number : ");
	scanf("%d", &num);
	printf("%d\n", num);
	printf(" 1. Naive Algorithm \n 2. Efficient Algorithm \n 3. More Efficient Algorithm \n 4. Sieve of Eratosthenes Algorithm \n");
	printf("Please input a buttom number : ");
	scanf("%d", &buttom);

	switch (buttom) {
	case 1: PN1(num); break;
	case 2: PN2(num); break;
	case 3: PN3(num); break;
	case 4: PN4(num); break;
	default: return 0;
	}

	printf("Elapsed time = %.3lf, %.3lf, %.3lf, %.3lf seconds.\n", t1, t2, t3, t4);

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
	main();
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
	main();
}

void PN3(int num)
{
	int i, j, k;
	int p[100000] = { 2, 3, 0 };

	//More Efficient Algorithm for Prime Number Finding
	start = clock();

	printf("2 3 ");
	k = 2;
	for (i = 4; i <= num; i++) {
		for (j = 0; j < i; j++) {	//for (j = 0; j < (int)sqrt(i); j++ {
			if ((i % p[j]) == 0) break;
			else if (j == k - 1) {
				printf("%d ", i);
				p[k] = i;  k++;
			}
		}
	}
	printf("\n");

	finish = clock();
	t3 = (double)(finish - start) / CLOCKS_PER_SEC;
	printf("Elapsed time of more efficient algorithm = %.3lf seconds.\n", t3);
	main();
}

void PN4(int num)
{
	int i, j, k;
	int p[100000] = { 2, 3, 0 };

	//Sieve of Eratosthenes Algorithm for Prime Number Finding
	start = clock();

	for (i = 0; i < 100000; i++) p[i] = i;
	for (i = 4; i < 100000; i += 2) p[i] = 0;
	for (i = 6; i < 100000; i += 3) p[i] = 0;

	printf("2 3 ");
	for (i = 4; i < num; i++) {
		if (p[i] != 0) {
			for (j = 2; j < i; j++) {
				if ((i % j) == 0) break;
				else if (j == i - 1) {
					for (k = 2 * i; k < num; k += i) p[k] = 0;
					printf("%d ", i);
				}
			}
		}
	}
	printf("\n");

	finish = clock();
	t4 = (double)(finish - start) / CLOCKS_PER_SEC;
	printf("Elapsed time of sieve of eratosthenes algorithm = %.3lf seconds.\n", t4);
	main();
}