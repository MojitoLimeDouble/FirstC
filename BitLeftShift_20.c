#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 20
// << ������: ��Ʈ�� ���� �̵�(Shift)
int main_20(void) {
	int num = 15;	// 00000000 00000000 00000000 00001111

	int result1 = num << 1;
	int result2 = num << 2;
	int result3 = num << 3;

	printf("1ĭ �̵� ���: %d \n", result1);
	printf("2ĭ �̵� ���: %d \n", result2);
	printf("3ĭ �̵� ���: %d \n", result3);
	return 0;
}