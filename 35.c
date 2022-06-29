#define _CRT_SECURE_NO_WARNINGS 1

//×Ö·û´®·´×ª£¬Èç½«×Ö·û´® "www.runoob.com" ·´×ªÎª "moc.boonur.www"¡£

#include <stdio.h>
#include <string.h>

//µÝ¹é
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
	printf("ÇëÊäÈë×Ö·û´®£º");
	scanf("%s", arr);
	InvertStr(arr);
	printf("×Ö·û´®·´×ª£º%s\n", arr);
    return 0;
}