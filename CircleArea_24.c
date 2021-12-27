#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 24

int main_24(void) {
	double rad;
	double area;
	printf("원의 반지름 입력: ");
	scanf("%lf", &rad);

	area = rad * rad * 3.1415;
	printf("원의 넓이: %f \n", area);
	return 0;
}