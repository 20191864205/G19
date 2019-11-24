# include <stdio.h>
int main()
{
	int i, j;
	char a[] = {"* * * * *"};   
	for (i = 1; i <= 5; i++)     
	{
		for (j = 0; j < i; j++)
			printf (" ");
		printf ("%s",a); //Ö±½ÓÊäa¼´¿É
		printf ("\n");
	}
	return 0; 
}
