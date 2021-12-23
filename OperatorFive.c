#include <stdio.h>

int main_8(void) {
	int num1 = 10;
	int num2 = (num1--)+2;

	printf("num1: %d \n", num1);
	printf("num2: %d \n", num2);
	return 0;
}