#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 19
// ~ ������: ��Ʈ���� NOT
int main_19(void) {
	int num1 = 15;	// 00000000 00000000 00000000 00001111
	int num2 = ~num1;

	printf("NOT ������ ���: %d \n", num2);
	return 0;
}