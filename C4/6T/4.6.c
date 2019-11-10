#include <stdio.h>
#include <math.h>
int main()
{
	float x,y;
	printf("ÇëÊäÈëxµÄÖµ£º");
	scanf("%f",&x);
	if(x<1)
	{
		y=x;
		printf("y=x=%f\n",y);
	}
	else  
		if(x<10)
		{
			y=2*x-1;
			printf("y=2*x-1=%f\n",y);
		}
		else
		{
			y=3*x-11;
			printf("y=2*x-1=%f\n",y);
		}
		return 0;
}
