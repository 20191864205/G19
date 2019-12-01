#include <stdio.h>
#include <string.h>
void longestword(char s[])
{
	char t[30],temp[30];
	int len=strlen(s),i,j=0;
	t[0]='\0';
	
	for(i=0;i<len;i++)
	{
		j=0;
		while(s[i]>='a'&&s[i]<='z'||s[i]>='A'&&s[i]<='Z')
			temp[j++]=s[i++];	
		temp[j]='\0';
		if(strlen(t)<strlen(temp))	
			strcpy(t,temp);	
		
	}
	printf("the longest word:\n");
	puts(t);
}
int main()
{
	char s[81];	 
	printf("input string:\n");
	gets(s);
	longestword(s);
	return 0;
 }