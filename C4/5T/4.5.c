#include <stdio.h>
#include <math.h>
#define  M  1000
int main()
{
	int a,b;
	printf("������һ��С��%d��������",M);
	scanf("%d",&a);
	while(a>M){
		printf("����������һ��С��%d��",M);
		scanf("%d",&a);
	}
	b=sqrt(a);
	printf("%d��ƽ������%d",a,b);
	return 0;
}

