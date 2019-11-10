#include <stdio.h>
int main()
{
	int h=10;
	float x1=2,y1=2,x2=-2,y2=2,x3=-2,y3=-2,x4=2,y4=-2,x,y,l1,l2,l3,l4;
	printf("一点坐标（x,y）");
	scanf("%f,%f",&x,&y);
	l1=(x-x1)*(x-x1)+(y-y1)*(y-y1);
	l2=(x-x2)*(x-x2)+(y-y2)*(y-y2);
	l3=(x-x3)*(x-x3)+(y-y3)*(y-y3);
	l4=(x-x4)*(x-x4)+(y-y4)*(y-y4);
	if(l1>1 && l2>1 && l3>1 && l4>1)
		h=0;
	printf("改点的高度为%d\n",h);
	return 0;
}
