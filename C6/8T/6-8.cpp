#include<stdio.h>
#include<stdlib.h>
int main() {
	int i, j, k;
	int max = 0,min=0,minj=0,maxi=0;
	int a[10][10];
	//�����鸳ֵ
	for (j=0;j<10;j++) {
		for (i=0;i<10;i++) {
			a[j][i] = rand();
		}
	}
	//�������
	for (j=0;j<10;j++) {
		for (i=0;i<10;i++) {
			printf("%d,",a[j][i]);
		}
	}
	printf("\n");
	//Ѱ�Ұ���
	for (j=0;j<10;j++) {
		for (i = 0; i < 10; i++) {
			if (a[j][i] > max) {
				max = a[j][i];
				minj = j;
				maxi = i;
			}
		}
		for (k = 0; k < 10; k++) {
			if (a[k][maxi] < min)
				min = a[k][maxi];			
		}		
	}
	if (min == a[minj][maxi])
		printf("%d ", a[minj][maxi]);
	else
		printf("û�а���");
	return 0;
}