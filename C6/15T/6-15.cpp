# include <stdio.h>
# include <string.h>
int main()
{
	char s1[100], s2[100];
	int i;
	printf ("输入s2:");
	gets(s2);                       
	for (i = 0; i <= strlen(s2); i++)  		
		s1[i] = s2[i];
	printf ("\n输出复制后s1:");
	puts(s1);
	return 0;
}
