#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 18
// ^ ������: ��Ʈ���� XOR
int main_18(void) {
	int num1 = 15;	// 00000000 00000000 00000000 00001111
	int num2 = 20;	// 00000000 00000000 00000000 00010100
	int num3 = num1 ^ num2;	// num1�� num2�� ��Ʈ���� ^ ����

	printf("XOR ������ ���: %d \n", num3);
	return 0;
}