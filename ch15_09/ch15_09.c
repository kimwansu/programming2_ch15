#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <locale.h>
#include <string.h>
#define TOGGLE_BIT(n, pos) ( (n) ^= (1 << (pos)) )

void change_case(char* str, int length);

int main()
{
    char s[80];
    int len;

    printf("���ڿ��� �Է��Ͻÿ�: ");
    gets(s);
    len = strlen(s);

    change_case(s, len);
    printf("��� ���ڿ�: %s\n", s);

    return 0;
}

void change_case(char* str, int length)
{
    int i;
    for (i = 0; i < length; i++)
    {
        // *(str + i) == str[i]
        if (isalpha(*(str + i)))
        {
            TOGGLE_BIT(*(str + i), 5);
        }
    }
}
