#define _CRT_SECURE_NO_WARNINGS 1

//对10个数进行排序。

#include <stdio.h>
#define N 10

void BubbleSort(int* a, int n)
{
	int i, j;
	int tmp;
	int flag;
	for (i = 0; i < n - 1; i++)
	{
		flag = 1;
		for (j = 0; j < n - i - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
				flag = 0;
			}
		}
		if (1 == flag)
		{
			break;
		}
	}
}

int main()
{
	int i = 0;
	int a[N];
	printf("请输入%d个数：", N);
	for (i = 0; i < N; i++)
	{
		scanf("%d", &a[i]);
	}
	BubbleSort(a, N);
	printf("排序后：");
	for (i = 0; i < N; i++)
	{
		printf("%d ", a[i]);
	}
    return 0;
}