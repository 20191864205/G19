#include <stdio.h>
#include<math.h>
int main()
{
	int a, n, i;
	double j, Sn;
	j = 0;
	Sn = 0;
	printf("������a��n��ֵ��");
	scanf("%d%d",&a,&n);
	for (i = 0; i <= n; i++)
	{
		Sn = Sn + j;
		j=j+a*pow(10, i);
		
	}
	printf("SnΪ%f", Sn);
	return 0;
}



