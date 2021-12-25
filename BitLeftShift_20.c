#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 20
// << 연산자: 비트의 왼쪽 이동(Shift)
int main_20(void) {
	int num = 15;	// 00000000 00000000 00000000 00001111

	int result1 = num << 1;
	int result2 = num << 2;
	int result3 = num << 3;

	printf("1칸 이동 결과: %d \n", result1);
	printf("2칸 이동 결과: %d \n", result2);
	printf("3칸 이동 결과: %d \n", result3);
	return 0;
}