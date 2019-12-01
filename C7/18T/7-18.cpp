#include <stdio.h>
int main()
{
	int run(int n);
	int day,month,year,sum,leap;
	printf("please input year,month,day\n");
	scanf("%d%d%d",&year,&month,&day);
	switch(month)
	{
		case 1:sum=0;break;
		case 2:sum=31;break;
		case 3:sum=59;break;
		case 4:sum=90;break;
		case 5:sum=120;break;
		case 6:sum=151;break;
		case 7:sum=181;break;
		case 8:sum=212;break;
		case 9:sum=243;break;
		case 10:sum=273;break;
		case 11:sum=304;break;
		case 12:sum=334;break;
		default:printf("date error");break;
	}
	leap=run(year);
	sum=sum+day+leap;
	printf("It is the %dth day.\n",sum);
	return 0;
}
int run(int n)
{
	int f;
	if (n%400==0 || (n%100!=0 && n%4==0))
		f=1;
	else
		f=0;
	return (f);
}

