#include <stdio.h>
int a,b,c,d;
int main()
{
	char text[100];
	void number(char text[]);
	
	printf("������һ���ַ���");
	gets(text);
	a=0;
	b=0;
	c=0;
	d=0;
	number(text);
	printf("���ַ�������%d����ĸ\n%d������\n%d���ո�\n%d�������ַ�\n",a,b,c,d);
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



