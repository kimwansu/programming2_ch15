#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <limits.h>

#define MIN(a, b) ( a < b ? a : b )
#define GET_MIN(x, y, z) ( (x < y) ? MIN(x, z) : MIN(y, z) )

int main()
{
    int a;
    int b;
    int c;
    int min;

    printf("3개의 정수를 입력하시오: ");
    scanf("%d %d %d", &a, &b, &c);

    min = GET_MIN(a, b, c);
    printf("최소값은 %d입니다.\n", min);

    return 0;
}
