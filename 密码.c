#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int zhuan(char x);
int main()
{
    char pin[100] = { 0 };
    printf("ÇëÊäÈëÒ»´®×Ö·û£º");
    scanf("%s", pin);
    for (int i = 0; pin[i]!='\0'; i++)
    {
        if (pin[i] >= 'a' && pin[i] <= 'z')
            pin[i] = zhuan(pin[i] - 32) + 32;
        else if(pin[i] >= 'A' && pin[i] <= 'Z')
            pin[i] = zhuan(pin[i]);
    }
    printf("¼ÓÃÜÃÜÂëÎª£º%s\n", pin);
    return 0;
}
int zhuan(char x)
{
    char mi[27] = "NQXPOMAFTRHLZGECYJIUWSKDVB";
    int i = x - 65;
    return mi[i];
}