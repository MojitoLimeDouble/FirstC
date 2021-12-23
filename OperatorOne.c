#include <stdio.h>

int main_4(void) {
	int num1 = 40, num2 = 2;
	printf("%d+%d=%d \n", num1, num2, num1+num2);
	printf("%d-%d=%d \n", num1, num2, num1-num2);
	printf("%dX%d=%d \n", num1, num2, num1*num2);
	printf("%d÷%d의 몫=%d \n", num1, num2, num1/num2);
	printf("%d÷%d의 나머지=%d \n", num1, num2, num1%num2);
	return 0;
}