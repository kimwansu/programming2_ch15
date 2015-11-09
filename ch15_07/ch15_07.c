#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define GET_BIT(n, pos) ( 1 & ((n) >> (pos)) )

void display_bit(int value);

int main()
{
    int n;

    printf("정수값을 입력하시오: ");
    scanf("%d", &n);

    display_bit(n);

    return 0;
}

void display_bit(int value)
{
    int i;
    for (i = 31; i >= 0; i--)
    {
        putchar('0' + (char)GET_BIT(value, i));
    }
    putchar('\n');
}
