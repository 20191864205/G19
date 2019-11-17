#include<stdio.h>
int main() {
	int i, j = 0, k = 0;
	for (i = 1; i <= 7; i++) {
		if (i > 4) {
			j = (8 - i) * 2 - 1;
			k = i - 3;
		}
		else {
			j = 2 * i - 1;
			k = 5 - i;
		}
		for (; j >= 1; j--) {
			for (; k >= 1; k--) {
				printf(" ");
			}
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
