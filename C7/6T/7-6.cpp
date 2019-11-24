#include<stdio.h>
#include<string.h>
int str(char a[30],char b[10])//定义两个数组; 字符串1必须足够大,以便容纳连接后的新字符
{


	strcat(a,b);//连接两个字符数组中的字符串把字符串2接到字符串1的后面; 
	return 0;
}
int main()
{
	char a[30];
	char b[10];
	gets(a);//输入字符串a; 
	gets(b);//输入字符串b； 
	str(a,b);//调用你函数; 
	puts(a);//输出连接后的函数; 
	return 0;
}

