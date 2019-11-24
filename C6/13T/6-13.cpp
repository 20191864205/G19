#include<stdio.h>
#include<string.h>
int main() {
	int i , j ;
	char a[10], b[10], c[20];
	gets(a);
	gets(b);
	for (i = 0; a[i] != '\0'; i++)
		c[i] = a[i];
	for (j = 0; b[j] != '\0'; j++)
		c[i + j] = b[j];
	c[i + j + 1] = '\0';
	printf("两个字符串连接后的字符串为：%s\n",c);
	return 0;
}