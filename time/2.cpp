#include <stdio.h>
int main()
{
	int year, month, day, m1, m2, m3, total,leap=0;
	m1 = 31;
	m3 = 30;
	total = 0;
	printf("请输入日期：\n");
	scanf("%d %d %d", &year, &month, &day);

	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		m2 = 29;
	else
		m2 = 28;
	if (month >= 0 && month <= 12) {
		switch (month)
		{
		case 1 :
			if (day <= 31) {
				total = day;
				leap = 1;
			}
			else 
				printf(" enter data error!\n ");
			break;
		case 2 :
			if (day <= m2) {
				total = m1 + day;
				leap = 1;
			}
			else
				printf(" enter data error!\n ");
			break;
		case 3 :
			if (day <= 31) {
				total = m1 + m2 + day;
				leap = 1;
			}
			else
			printf(" enter data error!\n ");
			break;
		case 4 :
			if (day <= 30) {
				total = m1 * 2 + m2 + day;
				leap = 1;
			}
			else
				printf(" enter data error!\n ");
			break;
		case 5 :
			if (day <= 31) {
				total = m1 * 2 + m2 + m3 + day;
				leap = 1;
			}
			else
			printf(" enter data error!\n ");
			break;
		case 6 :
			if (day <= 30) {
				total = m1 * 3 + m2 + m3 + day;
				leap = 1;
			}
			else
			printf(" enter data error!\n ");
			break;
		case 7 :
			if (day <= 31) {
				total = m1 * 3 + m2 + m3 * 2 + day;
				leap = 1;
			}
			else
			printf(" enter data error!\n ");
			break;
		case 8 :
			if (day <= 31) {
				total = m1 * 4 + m2 + m3 * 2 + day;
				leap = 1;
			}
			else
			printf(" enter data error!\n ");
			break;
		case 9 :
			if (day <= 30) {
				total = m1 * 5 + m2 + m3 * 2 + day;
				leap = 1;
			}
			else
			printf(" enter data error!\n ");
			break;
		case 10 :
			if (day <= 31) {
				total = m1 * 5 + m2 + m3 * 3 + day;
				leap = 1;
			}
			else
			printf(" enter data error!\n ");
			break;
		case 11 :
			if (day <= 30) {
				total = m1 * 6 + m2 + m3 * 3 + day;
				leap = 1;
			}
			else
			printf(" enter data error!\n ");
				break;
		case 12 :
			if (day <= 31) {
				total = m1 * 6 + m2 + m3 * 4 + day;
				leap = 1;
			}

			else
			printf(" enter data error!\n ");
				break;

		}
		if(leap==1)
		printf(" %d月%d日是%d年的第%d天\n ", month, day, year, total);
	}
	else
		printf("enter month error!\n");
	
	return 0;
}
