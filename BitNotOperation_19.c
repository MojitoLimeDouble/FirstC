#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 19
// ~ 연산자: 비트단위 NOT
int main_19(void) {
	int num1 = 15;	// 00000000 00000000 00000000 00001111
	int num2 = ~num1;

	printf("NOT 연산의 결과: %d \n", num2);
	return 0;
}