#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int a;
	int b;
	scanf("%d", &a);
	if (a < 1) {
		printf("값을 잘못 입력하였습니다.");
		return;
	}
	scanf("%d", &b);
	if (b > 10000) {
		printf("값을 잘못 입력하였습니다.");
		return;
	}
	printf("%d\n", a + b);
	printf("%d\n", a - b);
	printf("%d\n", a * b);
	printf("%d\n", a / b);
	printf("%d\n", a % b);

}