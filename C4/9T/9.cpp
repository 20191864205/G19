#include <stdio.h>
#include <math.h>
int main()
{
	unsigned int i, j = 0, y,w;
	int k,q;
	int a,b=0,c,h;
	scanf("%d", &i);
	k = i;
	q=i;

	if (i < 100000){
	
		while (i != 0) {
			y = i % 10;
			j = j + 1;
			i = i / 10;
			printf("%d,", y);
		}
		if(i==0)
			printf("\n");
		while(j!=0){
			c=b;
			j--;
			a=pow(10,j);
			b=k/a;
			h=b-10*c;
			printf("%d,",h);
		}
	}
	else
		printf("������һ����������λ��������");
	
	
	printf("\n%7d��%dλ�����\n", k, j);
	return 0;
}
