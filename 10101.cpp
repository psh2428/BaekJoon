#define _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>

void main() {
	int a, b, c;
	scanf("%d", &a);
	if (a < 0 && a>180) {
		printf("값을 잘못입력하셨습니다.");
		return;
	}
	scanf("%d", &b);
	if (b < 0 && b>180) {
		printf("값을 잘못입력하셨습니다.");
		return;
	}
	scanf("%d", &c); 
	if (c < 0 && c>180) {
		printf("값을 잘못입력하셨습니다.");
		return;
	}

	if (a == 60 && b == 60 && c == 60) {
		printf("Equilateral");
	}
	else if (a + b + c == 180 && a == b || b == c || a == c) {
		printf("Isosceles");
	}
	else if (a + b + c == 180 && a != b && b != c) {
		printf("Scalene");
	}
	else
		printf("Error");
}