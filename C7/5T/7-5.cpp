#include <stdio.h>
#include <string.h>
int main ()
{
	void fun(char str[]);
	char str[100];
	printf("请输入一串字符：");
	scanf("%s",str);
	fun(str);
	printf("这个字符串反向输入为%s\n",str);
	return 0;
}

void fun(char str[])
{
	int i,j;
	char t;
	for(i=0,j=strlen(str);i<(strlen(str)/2);i++,j--)
	{
		t=str[i];
		str[i]=str[j-1];
		str[j-1]=t;
	}

}

