#include<stdio.h>
void yy(char s1[])
{	
	 int i,j;
	 char s2[100];
	 for(i=0,j=0;s1[i]!='\0';i++)
	 {		
		 if((s1[i]=='a')||(s1[i]=='e')||(s1[i]=='i')||(s1[i]=='o')||(s1[i]=='u')||(s1[i]=='A')||(s1[i]=='E')||(s1[i]=='I')||(s1[i]=='O')||(s1[i]=='U'))	
		 {			
			 s2[j]=s1[i];	
			 j++;	
		}
	 }
	 s2[j]='\0';	
	 printf("����Ԫ����ĸΪ��");
	 puts(s2);
}
 int main()
 {
	 char s1[100];
	 printf("������������ַ���");
	 gets(s1);
	 yy(s1);
	 return 0;
 }

