#include <stdio.h>
int main()
{
	int i,j,k,s;

	for(i=2;i<=1000;i++)
	{
		s=0;
		for(j=1;j<i;j++)
		{
			if((i%j)==0)
				s=s+j;
		}
	
		if(i==s)
		{
			printf("%d its factors are ",i);
			for(k=1;k<i;k++)
			{
				if((i%k)==0)
					printf("%d,",k);
			}
			printf("\n");
		}
	}

	return 0;
}


				

