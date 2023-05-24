#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	int time[1000];
	int a[1000] = { 0, };
	int sum = 0;
	int sum2 = 0;
	int temp;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &time[i]);
	}
	for (int i = n - 1; i >= 1; i--) {
		for (int j = 0; j < i; j++)
			if (time[j] > time[j + 1]) {
				temp = time[j];
				time[j] = time[j + 1];
				time[j + 1] = temp;
			}
	}
	for (int i = 0; i < n; i++) {
		sum += time[i];
		a[i] = sum;
	}
	for (int i = 0; i < n; i++) {
		sum2 += a[i];
	}
	printf("%d", sum2);
}

	
