#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int i, j, x, y;
	int max = 0;
	int arr[9][9] = { 0, };
	for (i = 0; i < 9; i++) {
		for (j = 0; j < 9; j++) {
			scanf("%d",&arr[i][j]);
			if (max <= arr[i][j]) {
				max = arr[i][j];
				x = i;
				y = j;
			}
		}
		
	}

	printf("%d\n%d %d", max, x + 1, y + 1);
	return 0;
}