#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 21
// >> ������: ��Ʈ�� ������ �̵�(Shift)
int main_21(void) {
	int num = -16; // 11111111 11111111 11111111 11110000
	printf("2ĭ ������ �̵��� ���: %d \n", num >> 2);
	printf("3ĭ ������ �̵��� ���: %d \n", num >> 3);
	return 0;
}