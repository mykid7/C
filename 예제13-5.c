#include <stdio.h>

int main(void)
{
	register int i;							// �������� ����
	auto int sum = 0;						// auto ���� ����

	for (i = 0; i <= 10000; i++)			// �ݺ� �������� i�� ��� �����
	{
		sum += i;							// i ���� �ݺ��Ͽ� ����
	}

	printf("%d\n", sum);

	return 0;
}