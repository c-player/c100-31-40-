#define _CRT_SECURE_NO_WARNINGS 1

//�ַ�����ת���罫�ַ��� "www.runoob.com" ��תΪ "moc.boonur.www"��

#include <stdio.h>
#include <string.h>

//�ݹ�
//void InvertStr(char* arr)
//{
//	char tmp = arr[0];
//	int len = strlen(arr);
//	arr[0] = arr[len - 1];
//	arr[len - 1] = '\0';
//	if (strlen(arr + 1) > 1)
//	{
//		InvertStr(arr + 1);
//	}
//	arr[len - 1] = tmp;
//}

void InvertStr(char* arr)
{
	int i, j;
	int tmp;
	for (i = 0, j = strlen(arr) - 1; i < j; i++, j--)
	{
		tmp = arr[i];
		arr[i] = arr[j];
		arr[j] = tmp;
	}
}

int main()
{
	char arr[80];
	printf("�������ַ�����");
	scanf("%s", arr);
	InvertStr(arr);
	printf("�ַ�����ת��%s\n", arr);
    return 0;
}