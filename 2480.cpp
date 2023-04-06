#include <stdio.h>

void main() {
	int a, b, c, d;
	scanf("%d %d %d", &a, &b, &c);
	if (a, b, c < 1 || a, b, c>6) {
		printf("값을 잘못 입력하였습니다.");
	}
	if (a == b && b == c) {
		printf("%d", 10000 + a * 1000);
	 }
	else if (a == b || a == c || b == c) {
		if (a == b) {
			d = a;
		}
		else if (a == c) {
			d = a;
		}
		else if (b == c) {
			d = b;
		}
		printf("%d", 1000 + d * 100);
	}
	else if (a != b && a != c && b != c) {
		if (a > b && a > c) {
			printf("%d", a * 100);
		}
		else if (b > a && b > c) {
			printf("%d", b * 100);
		}
		else if (c > a && c > b) {
			printf("%d", c * 100);
		}
	}
}
