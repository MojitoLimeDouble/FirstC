#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//14
int main_14(void) {
	int num1 = 0xA7, num2 = 0x43;
	int num3 = 032, num4 = 024;

	printf("16진수 0xA7의 10진수 정수 값: %d \n", num1);
	printf("16진수 0x43의 10진수 정수 값: %d \n", num2);
	printf("8진수 032의 10진수 정수 값: %d \n", num3);
	printf("8진수 024의 10진수 정수 값: %d \n", num4);

	printf("%d-%d=%d \n", num1, num2, num1 - num2);
	printf("%d+%d=%d \n", num3, num4, num3 + num4);
	return 0;
}