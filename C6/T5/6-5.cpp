#include <stdio.h>

int main()
{
	int a[5] = {9,6,2,8,4};
	int i = 0, tmp;
	for (i = 0; i < 5/2; ++i)
	{
		tmp = a[4-i];
		a[4-i] = a[i];
	a[i] = tmp;
	}
	for (i = 0; i < 5; ++i)
		printf("%4d\n", a[i]);

	return 0;
} 