#define _CRT_SECURE_NO_WARNINGS 1

//ɾ��һ���ַ����е�ָ����ĸ���磺�ַ��� "aca"��ɾ�����е� a ��ĸ��

#include <stdio.h>
#include <string.h>

//i,j�ֱ�������i�������飬����ɾ���ַ����������������ɾ���ַ��򸳸�arr[j]
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
	printf("������һ���ַ���(��������ո�)��");
	scanf("%s", arr);
	getchar();
	printf("������Ҫɾ�����ַ���");
	scanf("%c", &c);
	printf("ɾ����%s", DelChar(arr, c));
    return 0;
}