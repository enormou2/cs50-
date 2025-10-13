#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int bian(long long n);
int main()
{
    long long card;
    do {
        printf("请输入您的银行卡号：");
        scanf("%lld", &card);
    } while (card < 0 );
    int num = bian(card);
    int a = luhn(card);
    if (a % 10 == 0)//下面是判断哪种卡，很粗糙，但只想到这种
    {
        if (num == 15 & ((card / 10000000000000) == 34 || (card / 10000000000000) == 37))
            printf("您的卡是美国运通卡\n");
        else if (num == 16 & ((card / 100000000000000) == 51 || (card / 100000000000000) == 52
            || (card / 100000000000000) == 53 || (card / 100000000000000) == 54
            || (card / 100000000000000) == 55))
            printf("您的卡是万事达卡\n");
        else if ((num == 13 && (card / 1000000000000) == 4) || (num == 16 && (card / 1000000000000000) == 4))
            printf("您的卡是Visa卡\n");
    }
    else
        printf("您的卡无效\n");
    return 0;
}
int bian(long long n)//这个函数用来读取卡号位数
{
    int i=1;
    while (n >= 10)
    {
        n /= 10;
        i++;
    } 
    return i;
}
int luhn(long long b)
{
    int a = 0;
    for (int i = 0; i < num; i++)//判断卡是否有效
    {
        a += b % 10;
        b /= 10;
        if (b * 2 >= 10)
            a += ((b % 10) * 2) % 10 + ((b % 10) * 2) / 10;
        else
            a += (b % 10) * 2;
        b /= 10;
    }
    return a;
}