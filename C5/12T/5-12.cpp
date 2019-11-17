#include <stdio.h>
int main()
{
	int i;
	double s;
	
	s=1;
	for(i=1;i<=9;i++)
	{
		s=(s+1)*2;
	}
	printf("第一天共摘了%f个桃子\n",s);
	return 0;
}