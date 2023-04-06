#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int s, k, h;
	scanf("%d %d %d", &s, &k, &h);
	if (s < 0 || k < 0 || h < 0 || s>100 || h>100 || k>100) {
		printf("값을 잘못입력하셨습니다.");
		return;
	}

	if (s + k + h >= 100) {
		printf("OK");
	}
	else if (s, h, k < 0 || s, h, k>100)
		printf("값을 잘못입력하셨습니다.");
	else if (s + k + h < 100) {
		if (s < k && s < h) {
			printf("Soongsil");
		}
		else if (k < s && k < h) {
			printf("Korea");
		}
		else if (h < s && h < k) {
			printf("Hanyang");
		}

	}
	else if (s < 0 || k < 0 || h < 0 || s>100 || h>100 || k>100)
		printf("값을 잘못입력하셨습니다.");

}