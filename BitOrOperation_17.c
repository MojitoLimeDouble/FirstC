#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 17
// | ������: ��Ʈ���� OR
int main(void) {
	int num1 = 15;	// 00000000 00000000 00000000 00001111
	int num2 = 20;	// 00000000 00000000 00000000 00010100
	int num3 = num1 | num2;	// num1�� num2�� ��Ʈ���� | ����

	printf("OR ������ ���: %d \n", num3);
	return 0;
}