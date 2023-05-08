#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int arr[10];
	int a = 1, b = 1;
	for (int i = 0; i < 8; i++) {
		scanf("%d", &arr[i]);		
	}
	for (int j = 0; j < 8; j++) {
		if (arr[j] != j + 1) {
			a = 0;
		}
	}
	for (int p = 0; p < 8; p++) {
		if (arr[p] != 8 - p) {
			b = 0;
		}
	}

	if (a == 0 && b == 0) {
		printf("mixed");
	}
	else if (a == 1) {
		printf("ascending");
	}
	else if (b == 1) {
		printf("descending");
	}
}