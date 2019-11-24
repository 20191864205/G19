#include <stdio.h>
int main()
{
	int i,j,e,b,c,d,number;
	char a[3][80];
	e=b=c=d=number=0;
	for(i=0;i<3;i++)
	{
		printf("请输入第%d行: \n",i+1);
		gets(a[i]);
		for(j=0;j<80;j++)
		{
			if(a[i][j]>='A'&&a[i][j]<='Z')
				e++;
			else if(a[i][j]>='a'&&a[i][j]<='z')
				b++;
			else if(a[i][j]>='0'&&a[i][j]<='9')
				number++;
			else if(a[i][j]==' ')
				c++;
			else
				d++;
		}
	}
	printf("\n");
	printf("大写字母有%d个\n",e);
	printf("小写字母有%d个\n",b);
	printf("数字有%d个\n",number);
	printf("空格有%d个\n",c);
	printf("其他字符有%d个\n",d);
	return 0;
}





