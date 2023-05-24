#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int t, c = 0, Quarter = 0, Dime = 0, Nickel = 0, Penny = 0;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		scanf("%d", &c);
		Quarter = c / 25;
		c -= Quarter * 25;
		Dime = c / 10;
		c -= Dime * 10;
		Nickel = c / 5;
		c -= Nickel * 5;
		Penny = c;
		printf("%d %d %d %d\n", Quarter, Dime, Nickel, Penny);

	}
	return 0;
}