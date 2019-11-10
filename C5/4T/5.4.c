#include <stdio.h>
int main()
{
	char c;
	int i = 0, j = 0, k = 0, l = 0;
	while ((c = getchar()) != '\n')
	{
		if (c >= 65 && c <= 90 || c > 97 && c <= 122)
			i++;
		else if (c >= 48 && c <= 57)
			j++;
		else if (c == 32)
			k++;
		else
			l++;
	}
	printf("字母%d个\t数字%d个\t空格%d个\t其他字符%d个\n",i,j,k,l);
	return 0;
}

