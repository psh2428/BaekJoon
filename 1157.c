#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>	

int main() {
	char arr[1000000];
	int cnt[26] = { 0, };
	int len;
	int i, j;
	char a;
	int max;
	int select = 0;
	int result = 0;

	scanf("%s", arr);
	len = strlen(arr);

	for (i = 0; i < len; i++) {
		if (arr[i] >= 97 && arr[i] <= 122) {
			arr[i] -= 32;
		}
	}
	

	for (i = 'A'; i <= 'Z'; i++) {
		for (j = 0; j < len; j++) {
			if (i == arr[j]) {
				cnt[i - 'A']++;
			}
		}
	}
	max = cnt[0];
	for (i = 1; i < 26; i++) {
		if (max < cnt[i]) {
			max = cnt[i];
			select = i;
		}
	}
	for (i = 0; i < 26; i++) {
		if (max == cnt[i]) {
			result++;
		}
	}
	if (result > 1) {
		printf("?\n");
	}
	else
		printf("%c", select + 'A');
	return 0;
}