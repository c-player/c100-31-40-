#define _CRT_SECURE_NO_WARNINGS 1

//���������ڼ��ĵ�һ����ĸ���ж�һ�������ڼ��������һ����ĸһ����������жϵڶ�����ĸ��

#include <stdio.h>

int main()
{
	char first;
	char second;
	printf("�������һ����ĸ��");
	first = getchar();
	getchar();//��׽�������Ļس�
	switch (first)
	{
	case 'm':
	case 'M':
		printf("Monday");
		break;
	case 'w':
	case 'W':
		printf("Wednesday");
		break;
	case 'f':
	case 'F':
		printf("Friday");
		break;
	case 't':
	case 'T':
		printf("������ڶ�����ĸ��Сд����");
		second = getchar();
		switch (second)
		{
		case 'u':
			printf("Tuesday");
			break;
		case 'h':
			printf("Thursday");
			break;
		default:
			break;
		}
		break;
	case 's':
	case 'S':
		printf("������ڶ�����ĸ��Сд����");
		second = getchar();
		switch (second)
		{
		case 'a':
			printf("Satsday");
			break;
		case 'u':
			printf("Sunday");
			break;
		default:
			break;
		}
		break;
	default:
		break;
	}
    return 0;
}