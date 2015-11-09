#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define PI 3.141592
#define VOLUME(r, h) ( PI * (r) * (r) * (h) )

int main()
{
    double radius;
    double height;
    double volume;

    printf("반지름과 높이를 입력하시오: ");
    scanf("%lf %lf", &radius, &height);

    volume = VOLUME(radius, height);
    printf("원기둥의 부피는 %lf입니다.\n", volume);

    return 0;
}