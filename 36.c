#define _CRT_SECURE_NO_WARNINGS 1

//��100֮�ڵ�������

#include <stdio.h>
#include <math.h>

int IsPrime(int n)
{
	int i;
	if (n == 1)
	{
		return 0;
	}
	for (i = 2; i <= (int)sqrt(n); i++)
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
	int i;
	printf("100����������");
	for (i = 1; i <= 100; i++)
	{
		if (1 == IsPrime(i))
		{
			printf("%d ", i);
		}
	}
    return 0;
}