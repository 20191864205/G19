#include <stdio.h>
#include <string.h>
int main ()
{
	void fun(char str[]);
	char str[100];
	printf("������һ���ַ���");
	scanf("%s",str);
	fun(str);
	printf("����ַ�����������Ϊ%s\n",str);
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

