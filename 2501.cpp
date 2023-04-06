#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
void main() {
	int n, k, i;
	int cnt = 0;
	scanf("%d %d", &n, &k);

	for (i = 1; i <= n; i++) {
		if (n % i == 0) {
			cnt++;
			if (cnt == k)
				break;
		
		}
	}
	if (i <= n)
		printf("%d", i);
	else 
		printf("0");
	
}*/

void main() {
	int n, k;
	int i;
	int j = 0;
	int ary[] = { 0 };
	scanf("%d %d", &n, &k);
	for (i = 1; i <= n; i++) {
		if (n % i == 0) {
			ary[j] = i;
			j++;
		}
	}
	if (k <= n) {
		printf("%d", ary[k - 1]);
	}
	else
		printf("0");
}