#include <stdio.h>
void fun(char s[4])
{
	int i,num[4];
	for(i=0;i<4;i++)
		num[i]=s[i]-'0';
	for(i=0;i<4;i++)
		printf("%d ",num[i]);	
}
int main()
{
	char s[4];
	printf("请输入一个四位数:\n");
	gets(s);
	fun(s);
	return 0;
}

