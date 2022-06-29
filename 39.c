#define _CRT_SECURE_NO_WARNINGS 1

//有一个已经排好序的数组。现输入一个数，要求按原来的规律将它插入数组中。

#include <stdio.h>

//二分法
int main()
{
	int i, j, mid;
	int n, index;
	int a[11] = { 1,3,6,11,34,45,47,64,79,85 };
	printf("输入要插入的数：");
	scanf("%d", &n);
	i = 0;
	j = sizeof(a) / sizeof(a[0]) - 2;
	while ((j - i) != 1)
	{
		mid = (i + j) / 2;
		if (n > a[mid])
		{
			i = mid;
		}
		else if (n < a[mid])
		{
			j = mid;
		}
		else
		{
			break;
		}
	}
	if (j - i == 1)
	{
		index = j;
	}
	else
	{
		index = mid + 1;
	}
	for (i = sizeof(a) / sizeof(a[0]) - 1; i > index; i--)
	{
		a[i] = a[i - 1];
	}
	a[index] = n;
	for (i = 0; i < sizeof(a) / sizeof(a[0]); i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}