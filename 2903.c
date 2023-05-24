#define _CRT_SECURE_NO_WARNIGNS
#include <stdio.h>

int main() {
	int n, i, k = 2, sum = 3;
	scanf("%d", &n);
	for (i = 1; i < n; i++) {
		sum += k;
		k *= 2;
	}
	printf("%d", sum * sum);
	
}