#define _CRT_SECURE_NO_WARNINGS 1

//�ж�һ�������Ƿ�Ϊ������

#include <stdio.h>
#include <math.h>

int IsPrime(int n)
{
	int i;
	int tmp = (int)sqrt(n);
	if (n == 1)
	{
		return 0;
	}
	for (i = 2; i <= tmp; i++)
	{
		if (n%i == 0)
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	int n;
	while (1)
	{
		printf("������һ��������(-1�˳�)��");
		scanf("%d", &n);
		if (n == -1)
		{
			return -1;
		}
		else if (n <= 0)
		{
			printf("���ݷǷ������������롣\n");
		}
		else
		{
			if (1 == IsPrime(n))
			{
				printf("%d��������\n", n);
			}
			else
			{
				printf("%d����������\n", n);
			}
		}
	}
    return 0;
}
