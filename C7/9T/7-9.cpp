#include <stdio.h>
int a,b,c,d;
int main()
{
	char text[100];
	void number(char text[]);
	
	printf("请输入一串字符：");
	gets(text);
	a=0;
	b=0;
	c=0;
	d=0;
	number(text);
	printf("此字符串里有%d个字母\n%d个数字\n%d个空格\n%d个其他字符\n",a,b,c,d);
	return 0;
}

void number(char text[])
{
	int i;
	for(i=0;text[i]!='\0';i++)
	{
		if(text[i]>='A' && text[i]<='Z' && text[i]>='a' && text[i]<='z')
			a++;
		else if(text[i]>='0'&&text[i]<='9')
			b++;
		else if(text[i]==' ')
			c++;
		else
			d++;
	}
}



