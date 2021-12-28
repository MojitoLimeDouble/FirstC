#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 26

int main(void) {
	printf("literal int size: %d \n", sizeof(7));
	printf("literal double size: %d \n", sizeof(7.14));
	printf("literal char size: %d \n", sizeof('A'));
	return 0;
}