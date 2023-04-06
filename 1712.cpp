#include <stdio.h>

void main() {
	int A, B, C;
	scanf("%d %d %d", &A, &B, &C);
	if (A, B, C > 210000000) {
		printf("오류입니다.");
	}
	
	if (B >= C) {
		printf("-1");
	}
	else {
		printf("%d", A / (C - B) + 1);
	}
	
	
	
}