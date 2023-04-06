#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int n, m, min = 2000, min2 = 2000;
	int i, j;
	int sum;
	for (i = 0; i < 3; i++) {
		scanf("%d", &n);
		if (min > n)
		min = n;
	}

	for (j = 0; j < 2; j++) {
		scanf("%d", &m);
		if (min2 > m)
			min2 = m;
	}
	sum = min + min2 - 50;
	printf("%d", sum);
	
	

}