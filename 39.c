#define _CRT_SECURE_NO_WARNINGS 1

//��һ���Ѿ��ź�������顣������һ������Ҫ��ԭ���Ĺ��ɽ������������С�

#include <stdio.h>

//���ַ�
int main()
{
	int i, j, mid;
	int n, index;
	int a[11] = { 1,3,6,11,34,45,47,64,79,85 };
	printf("����Ҫ���������");
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