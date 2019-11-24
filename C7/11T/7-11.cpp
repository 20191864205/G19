#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void qp(char s[]);                     //定义排序函数
int main()
{
    char str[11];
    gets(str);                           //输入10个字符
    qp(str);                           //调用排序函数
    puts(str);                           //输出排序后的字符
	system("pause");
    return 0;
}
//排序函数
void qp(char s[])
{
    int i, j;
    char temp;
    for (i=0; i<9; i++)
        for (j=0; j<9-i; j++)
            if (s[j]>s[j+1]){
                temp=s[j];
                s[j]=s[j+1];
                s[j+1]=temp;
            }
}

