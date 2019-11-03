
#include <stdio.h>
int main()
{
	unsigned int i,j=0,y;
	scanf("%d",&i);

	{if(i<100000)
{ while(i!=0){
y=i%10;
j=j+1;
i=i/10;
printf("%d, ",y);}
}
else
printf("请输入一个不多于五位的正整数");
	}
	
printf("\n位数:%d\n",j);
return 0;
}
