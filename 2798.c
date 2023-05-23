#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	int n, m;
	int i, j, k;
	int card[100];
	int sum = 0;
	int max = 0;
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++) {
		scanf("%d", &card[i]);
	}
	for (i = 0; i < n - 2; i++) {
		for (j = i + 1; j < n - 1; j++) {
			for (k = j + 1; k < n; k++) {
				sum = card[i] + card[j] + card[k];
				if (sum <= m && max < sum) {
					max = sum;
				}
			}
		}
	}
	printf("%d", max);
	return 0;
}