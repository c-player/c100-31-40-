#define _CRT_SECURE_NO_WARNINGS 1

//删除一个字符串中的指定字母，如：字符串 "aca"，删除其中的 a 字母。

#include <stdio.h>
#include <string.h>

//i,j分别自增，i遍历数组，遇到删除字符则继续自增，不是删除字符则赋给arr[j]
char* DelChar(char* arr, char c)
{
	int i = 0, j = 0;
	for (i = 0; i <= strlen(arr); i++)
	{
		if (arr[i] == c)
		{
			continue;
		}
		arr[j++] = arr[i];
	}
	return arr;
}

int main()
{
	char arr[200], c;
	printf("请输入一个字符串(不可输入空格)：");
	scanf("%s", arr);
	getchar();
	printf("请输入要删除的字符：");
	scanf("%c", &c);
	printf("删除后：%s", DelChar(arr, c));
    return 0;
}