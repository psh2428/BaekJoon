#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int score;
	scanf("%d", &score);
	if (score < 0 || score >100) {
		printf("잘못 입력하셨습니다.");
		return;
	}
	if (90 <= score)
		printf("A");
	else if (80 <= score)
		printf("B");
	else if (70 <= score)
		printf("C");
	else if (60 <= score)
		printf("D");
	else if (score < 59)
		printf("F");
}