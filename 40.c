#define _CRT_SECURE_NO_WARNINGS 1

//��һ���������������

#include <stdio.h>
int main()
{
	int a[] = { 1,2,3,4,5 };
	int i;
	printf("����");
	for (i = sizeof(a) / sizeof(a[0]) - 1; i >= 0; i--)
	{
		printf("%d ", a[i]);
	}
    return 0;
}