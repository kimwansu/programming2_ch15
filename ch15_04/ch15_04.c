#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define PI 3.141592
#define VOLUME(r, h) ( PI * (r) * (r) * (h) )

int main()
{
    double radius;
    double height;
    double volume;

    printf("�������� ���̸� �Է��Ͻÿ�: ");
    scanf("%lf %lf", &radius, &height);

    volume = VOLUME(radius, height);
    printf("������� ���Ǵ� %lf�Դϴ�.\n", volume);

    return 0;
}