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

    printf("3���� ������ �Է��Ͻÿ�: ");
    scanf("%d %d %d", &a, &b, &c);

    min = GET_MIN(a, b, c);
    printf("�ּҰ��� %d�Դϴ�.\n", min);

    return 0;
}
