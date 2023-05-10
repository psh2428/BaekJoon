#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n, k;
	scanf("%d %d", &n, &k);
	int cnt = 0;
	int arr[1000];

	for (int i = 2; i <= n; i++) {
		arr[i] = i;
	}

	for (int i = 2; i <= n; i++) {
		if (arr[i] != 0) {
			for (int j = i; j <= n; j += i) {
				if (arr[j] != 0) {
					arr[j] = 0;
					cnt++;
				}
				if (cnt == k) {
					printf("%d\n", j);
					break;
				}
			}
		}
	}
	return 0;
}