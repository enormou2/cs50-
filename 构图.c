#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n;
	do {
		printf("请输入一个自然数：");
		scanf("%d", &n);
	} while (n < 1);
	for (int i = 1; i <= n; i++)
	{
		for (int a = 1; a <= n - i; a++)
		{
			printf(" ");
		}
		for (int b = 1; b <= i; b++)
		{
			printf("#");
		}
		printf(" ");
		for (int b = 1; b <= i; b++)
		{
			printf("#");
		}
		printf("\n");
	}
	return 0;
}