#include<stdio.h>
int main() {	
	int change(int a[3][3]);
	int i, j, a[3][3];
	printf("ÇëÊäÈëÊı×éa:\n");
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			scanf("%d",a[i][j]);
		}
	}
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("%d", a[i][j]);
		}
		printf("\n");
	}
	printf("%d", change[][]);
	return 0;
}
int change(int a[3][3]) {
	int i, j, k, b[3][3];
	for (i=0;i<3;i++) {
		for (j = 0; j < 3; j++) {
			b[j][i] = a[i][j];
		}
	}
	printf("\n");
	for (j=0;j<3;j++) {
		for (i = 0; i < 3; i++) {
			printf("%d",b[i][j]);
		}
		printf("\n");
	}
}