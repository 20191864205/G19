#include<stdio.h>
#include<string.h>
int str(char a[30],char b[10])//������������; �ַ���1�����㹻��,�Ա��������Ӻ�����ַ�
{


	strcat(a,b);//���������ַ������е��ַ������ַ���2�ӵ��ַ���1�ĺ���; 
	return 0;
}
int main()
{
	char a[30];
	char b[10];
	gets(a);//�����ַ���a; 
	gets(b);//�����ַ���b�� 
	str(a,b);//�����㺯��; 
	puts(a);//������Ӻ�ĺ���; 
	return 0;
}

