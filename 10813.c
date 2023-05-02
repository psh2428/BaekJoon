#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int arr[100] = { 0 };
	int N, M;
	int i, j;
	scanf("%d %d", &N, &M);
	for (int p = 0; p < N; p++) {
		arr[p] = p+1;
	}
	for (int k = 0; k < M; k++) {
		scanf("%d %d", &i, &j);
		int a = arr[j-1];
		arr[j-1] = arr[i-1];
		arr[i-1] = a;
	}
	for (int l = 0; l < N; l++) {
		printf("%d ", arr[l]);
	}
	return 0;

}

