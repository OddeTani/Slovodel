#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int SlovoDel()
{
	char Rul[2][26] =
	{
	{'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'},
	{1, 2, 3, 4, 5, 6, 1, 2, 3, 4, 5, 6, 7, 8, 1, 2, 3, 4, 5, 6, 1, 2, 3, 4, 5, 6}
	};
	char str[30];
	printf("����� 1 ������ �����: ");
	scanf_s("%s", str, 30);
	int L;
	int Res1 = 0;
	int Res2 = 0;
	L = strlen(str);
	for (int i = 0; i < L; i++)
	{
		for (int j = 0; j < 26; j++)
		{
			if (str[i] == Rul[0][j]) Res1 += Rul[1][j];
		}
	}
	printf("����� 2 ������ �����: ");
	scanf_s("%s", str, 30);
	L = strlen(str);
	for (int i = 0; i < L; i++)
	{
		for (int j = 0; j < 26; j++)
		{
			if (str[i] == Rul[0][j]) Res2 += Rul[1][j];
		}
	}
	printf("��������� ������ 1 = %d\n", Res1);
	printf("��������� ������ 2 = %d\n", Res2);
	if (Res1 > Res2) printf("����� 1 �������!!!");
	else if (Res2 > Res1) printf("����� 2 �������!!!");
	else printf("�������� ������ (��� ���������)");
}

int main(void)
{
	SlovoDel();
}