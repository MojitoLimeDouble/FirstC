#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//15
int main(void) {
	int i;
	float num = 0.0;

	for (i = 0; i < 100; i++)
		num += 0.1;

	printf("0.1을 100번 더한 결과: %f \n", num);
	return 0;
}