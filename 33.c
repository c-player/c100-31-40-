#define _CRT_SECURE_NO_WARNINGS 1

//判断一个数字是否为质数。

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
		printf("请输入一个正整数(-1退出)：");
		scanf("%d", &n);
		if (n == -1)
		{
			return -1;
		}
		else if (n <= 0)
		{
			printf("数据非法，请重新输入。\n");
		}
		else
		{
			if (1 == IsPrime(n))
			{
				printf("%d是质数。\n", n);
			}
			else
			{
				printf("%d不是质数。\n", n);
			}
		}
	}
    return 0;
}
