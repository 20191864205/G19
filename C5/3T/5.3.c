#include <stdio.h>
int main()
{
	int max = 0;
	int min = 0;
	int temp = 0;
	int mul = 0;
	printf("������������������");
	scanf("%d%d", &max, &min);
	mul = max * min;
	if (max < min)
	{
		temp = max;
		max = min;
		min = temp;
	}
	while (max % min != 0)
	{
		temp = min;
		min = max % min;
		max = temp;
	}
	printf("���Լ����%d\n",min);
	printf("��С��������%d\n",mul/min);
	return 0;
}

