# include <stdio.h>
# include <math.h>
# include <time.h> 
int main()
{
     
	int j, i, k,sum, max, min;
	long t0,t1;
	t0=clock();
	max = pow(10,9)-1;
	min = pow(10,2);
	for (i=min;i<=max;i++)
	{
		if(i>=100 && i<1000)
		{
			sum = 0;
			k = i;
			while (k!=0)
			{
				j = k % 10;
				sum = sum + pow(j,3);
				k = k / 10;
			}
			
			if (sum == i)
				printf ("%d\n",i);
		}
		else if(i>=1000 && i<10000)
		{
			sum = 0;
			k = i;
			while (k!=0)
			{
				j = k % 10;
				sum = sum + pow(j,4);
				k = k / 10;
			}
			
			if (sum == i)
				printf ("%d\n",i);
		}
		else if(i>=10000 && i<100000)
		{
			sum = 0;
			k = i;
			while (k!=0)
			{
				j = k % 10;
				sum = sum + pow(j,5);
				k = k / 10;
			}
			
			if (sum == i)
				printf ("%d\n",i);
		}
		else if(i>=100000 && i<1000000)
		{
			sum = 0;
			k = i;
			while (k!=0)
			{
				j = k % 10;
				sum = sum + pow(j,6);
				k = k / 10;
			}
			
			if (sum == i)
				printf ("%d\n",i);
		}
		else if(i>=1000000 && i<10000000)
		{
			sum = 0;
			k = i;
			while (k!=0)
			{
				j = k % 10;
				sum = sum + pow(j,7);
				k = k / 10;
			}
			
			if (sum == i)
				printf ("%d\n",i);
		}
		else if(i>=10000000 && i<100000000)
		{
			sum = 0;
			k = i;
			while (k!=0)
			{
				j = k % 10;
				sum = sum + pow(j,8);
				k = k / 10;
			}
			
			if (sum == i)
				printf ("%d\n",i);
		}
		else
		{
			sum = 0;
			k = i;
			while (k!=0)
			{
				j = k % 10;
				sum = sum + pow(j,9);
				k = k / 10;
			}
			
			if (sum == i)
				printf ("%d\n",i);
		}
	}
	t1=clock();
	printf("Time used: %10.2f seconds\n",(t1 - t0)/(float)CLOCKS_PER_SEC);

	return 0;
}
