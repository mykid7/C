#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>	// isupper

int RPS_main(void);
int decision(int usr, int com);
char command(void);
void service(char cmd);

int cmdstat;
//int win, tie, lose = 0;

int main(void)
{
	char menu, ans;

	cmdstat = 1;
	do {
		menu = command();

		cmdstat = 0;
		service (menu);
	} while (1);
}

char command(void)
{
	char com;

	printf("\n\n\n");
	if (cmdstat != 2) printf("	Available command : \n");
	printf("====================================\n");
	switch (cmdstat) {
	case 0: printf("...\n");
	case 1:
		printf("	R : Rock-Paper-scissor\n");
		printf("	S : Starcraft\n");
		printf("	M : Monkeys\n");
		printf("	Q : Quit and exit\n");
		printf("====================================\n");
	case 2: printf("	Enter a command : ");
		do { com = getchar(); } while (isspace(com));
		break;
	}
	return com;
}

void service(char cmd)
{
	int i, j;
	char ans;

	switch (cmd) {
	case 'R':	case 'r':
		RPS_main();
		cmdstat = 0;
		break;
	case 'S':	case 's':
	case 'M':	case 'm':
		printf("\n\n			<<< Coming soon ! >>>\n\n");
		break;
	case 'Q':	case 'q':
		printf(" Do you really want to quit ? ");
		do { ans = getchar(); } while (isspace(ans));
		if (isupper(ans) == 'Y') exit(1);
		exit(0);
		break;
	default:
		cmdstat = 1;
		break;
	}
}

int RPS_main(void)
{
	int i, max_try, com1, usr1;
	int result;
	int win = 0, tie = 0, lose = 0;

	srand((unsigned)time(NULL));

	max_try = 10;

	for (i = 1; i <= max_try; i++)
	{
		printf("Your selection (1: 가위, 2: 바위, 3: 보) ? ");
		scanf_s("%d", &usr1);
		//scanf("%d", &usr1);
		/*if (usr1 == 0)
		{
			return 0;
		}*/
		//printf("user type : %d\n", usr1);

		//srand((unsigned)time(NULL));
		
		com1 = (rand( ) % 3) + 1;
		//printf("computer type : %d\n", com1);
		
		result = decision(usr1, com1);

		if (result == 0) tie++;
		else if (result == 1) win++;
		else lose++;
		
		/*switch (usr1) {
		case 1:
			switch (com1) {
			case 1: printf("비겼다!!\n"); tie++; break;
			case 2: printf("졌다!!\n"); lose++; break;
			case 3: printf("이겼다!!\n"); win++; break;
			}
			break;
		case 2:
			switch (com1) {
			case 1: printf("이겼다!!\n"); win++; break;
			case 2: printf("비겼다!!\n"); tie++; break;
			case 3: printf("졌다!!\n"); lose++; break;
			}
			break;
		case 3:
			switch (com1) {
			case 1: printf("졌다!!\n"); lose++; break;
			case 2: printf("이겼다!!\n"); win++; break;
			case 3: printf("비겼다!!\n"); tie++; break;
			}
			break;
		}*/
	}
	printf("\nYour score : %d match %d win, %d tie, %d lose\n", win + tie + lose, win, tie, lose);
	// decision(usr1, com1);
	//printf("win : %d\ttie : %d\tlose : %d\n", win, tie, lose);

	return 0;
}

int decision(int usr, int com)
{
	switch (usr) {
	case 1:
		switch (com) {
		case 1: { printf("(%d, %d) 비겼다!\n", com, usr); return 0; }
		case 2: { printf("(%d, %d) 사람이 졌다!\n", com, usr); return -1; }
		case 3: { printf("(%d, %d) 사람이 이겼다!\n", com, usr); return 1; }
		}
		break;
	case 2:
		switch (com) {
		case 1: { printf("(%d, %d) 사람이 이겼다!\n", com, usr); return 1; }
		case 2: { printf("(%d, %d) 비겼다!\n", com, usr); return 0; }
		case 3: { printf("(%d, %d) 사람이 졌다!\n", com, usr); return -1; }
		}
		break;
	case 3:
		switch (com) {
		case 1: { printf("(%d, %d) 사람이 졌다!\n", com, usr); return -1; }
		case 2: { printf("(%d, %d) 사람이 이겼다!\n", com, usr); return 1; }
		case 3: { printf("(%d, %d) 비겼다!\n", com, usr); return 0; }
		}
		break;
	}

	return 3;

	/*if (usr1 == 1)
	{
		if (com1 == 1)
		{
			printf("비겼다!!\n"); tie++;
			main();
		}
		else if (com1 == 2)
		{
			printf("졌다!!\n"); lose++;
			main();
		}
		else
		{
			printf("이겼다!!\n"); win++;
			main();
		}
	}

	if (usr1 == 2)
	{
		if (com1 == 2)
		{
			printf("비겼다!!\n"); tie++;
			main();
		}
		else if (com1 == 3)
		{
			printf("졌다!!\n"); lose++;
			main();
		}
		else
		{
			printf("이겼다!!\n"); win++;
			main();
		}
	}

	if (usr1 == 3)
	{
		if (com1 == 3)
		{
			printf("비겼다!!\n"); tie++;
			main();
		}
		else if (com1 == 1)
		{
			printf("졌다!!\n"); lose++;
			main();
		}
		else
		{
			printf("이겼다!!\n"); win++;
			main();
		}
	}*/

	/*switch (usr1) {
	case 1:
		switch (com1) {
		case 1: printf("비\n"); tie++; break;
		case 2: printf("졌\n"); lose++; break;
		case 3: printf("이\n"); win++; break;
		}
		break;
	case 2:
		switch (com1) {
		case 1: printf("이\n"); win++; break;
		case 2: printf("비\n"); tie++; break;
		case 3: printf("졌\n"); lose++; break;
		}
		break;
	case 3:
		switch (com1) {
		case 1: printf("졌\n"); lose++; break;
		case 2: printf("이\n"); win++; break;
		case 3: printf("비\n"); tie++; break;
		}
		break;
	}*/
}