#include <stdio.h>
int main()
{
	int i,j,e,b,c,d,number;
	char a[3][80];
	e=b=c=d=number=0;
	for(i=0;i<3;i++)
	{
		printf("�������%d��: \n",i+1);
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
	printf("��д��ĸ��%d��\n",e);
	printf("Сд��ĸ��%d��\n",b);
	printf("������%d��\n",number);
	printf("�ո���%d��\n",c);
	printf("�����ַ���%d��\n",d);
	return 0;
}





