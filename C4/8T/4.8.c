#include <stdio.h>
int main()
{
	char grade;
	scanf("%c",&grade);
	printf("��ĳɼ��ȼ�Ϊ��");
	if(grade<60)
		printf("E");
	else if(grade<=69)
		printf("D");
	else if(grade<=79)
		printf("C");
	else if(grade<=89)
		printf("B");
	else if(grade<=100)
		printf("A");	
	return 0;
}

