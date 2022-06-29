#define _CRT_SECURE_NO_WARNINGS 1

//将一个数组逆序输出。

#include <stdio.h>
int main()
{
	int a[] = { 1,2,3,4,5 };
	int i;
	printf("逆序：");
	for (i = sizeof(a) / sizeof(a[0]) - 1; i >= 0; i--)
	{
		printf("%d ", a[i]);
	}
    return 0;
}