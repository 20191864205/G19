#include <stdio.h>
int main ()
{
	int i,c;
	double z,a1,a2,a3,a4,a5;
	printf("请输入利润i:");
	scanf("%d",&i);
	a1=100000*0.1;
	a2=100000*0.075+a1;
	a3=200000*0.05+a2;
	a4=200000*0.03+a3;
	a5=400000*0.015+a4;
	if(i>1000000)
		c=10;
	else
		c=i/100000;
	switch(c)
	{
		case 0:z=i*0.1;break;
		case 1:z=a1+(i-100000)*0.075;break;
		case 2:
		case 3:z=a2+(i-200000)*0.05;break;
		case 4:
		case 5:z=a3+(i-400000)*0.03;break;
		case 6:
		case 7:
		case 8:
		case 9:z=a4+(i-600000)*0.015;break;
		case 10:z=a5+(i-1000000)*0.01;
	}
	printf("奖金为：%10.2f\n",z);
	return 0;
}
