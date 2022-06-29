#define _CRT_SECURE_NO_WARNINGS 1

//请输入星期几的第一个字母来判断一下是星期几，如果第一个字母一样，则继续判断第二个字母。

#include <stdio.h>

int main()
{
	char first;
	char second;
	printf("请输入第一个字母：");
	first = getchar();
	getchar();//捕捉缓冲区的回车
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
		printf("请输入第二个字母（小写）：");
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
		printf("请输入第二个字母（小写）：");
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