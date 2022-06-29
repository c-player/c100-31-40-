#define _CRT_SECURE_NO_WARNINGS 1

//求一个3*3矩阵对角线元素之和

#include <stdio.h>

int main()
{
	int i, j, sum = 0;
	int a[3][3] = { 0 };
	printf("输入3*3矩阵元素：");
	for (i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if ((i == j) || (i + j == 2))
			{
				sum += a[i][j];
			}
		}
	}
	printf("对角线和：%d", sum);
    return 0;
}