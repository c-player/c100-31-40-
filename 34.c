#define _CRT_SECURE_NO_WARNINGS 1

//Á·Ï°º¯Êýµ÷ÓÃ¡£

#include <stdio.h>

float Add(float a, float b)
{
	return a + b;
}

float Del(float a, float b)
{
	return a / b;
}

int main()
{
	float a = 1.0, b = 2.0;
	float sum;
	sum = Del(Add(a, b), 2);
	printf("%f", sum);
    return 0;
}