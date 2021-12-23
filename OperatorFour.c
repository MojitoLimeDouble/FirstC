#include <stdio.h>

int main_7(void) {
	int num1 = 42;
	int num2 = 42;

	printf("num1: %d \n", num1);
	printf("num1++: %d \n", num1++); // 후위 증가
	printf("num1: %d \n\n", num1);

	printf("num2: %d \n", num2);
	printf("++num2: %d \n", ++num2); // 전위 증가
	printf("num2: %d \n\n", num2);
	return 0;
}