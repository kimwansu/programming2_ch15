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

    printf("문자열을 입력하시오: ");
    gets(s);
    len = strlen(s);

    change_case(s, len);
    printf("결과 문자열: %s\n", s);

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
