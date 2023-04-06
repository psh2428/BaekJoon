#include <stdio.h>

void main() {
	int hour, min, c;
	scanf("%d %d", &hour, &min);
	scanf("%d", &c);
	int min2 = min + c;
	int min3 = min2 / 60;
	int min4 = min2 % 60;
	if (min2 > 60) {
		hour += min3;
		if (hour >= 24) {
			hour = hour - 24;
		}
		printf("%d %d", hour, min4);

	}
	else if (min2 < 60) {
		if (hour >= 24) {
			hour - 24;
		}
		printf("%d %d", hour, min2);
	}

	
}