#include<stdio.h>
#define N 100
int main()
{
	int i,j,x,y,p=0,q=0,n,a[N][N];
	do
	{
		printf("请输入魔方阵的阶数：\n");
		scanf("%d",&n);
	}while(n<=0 || n%2==0);
	a[0][n/2]=1;
	x=0;
	y=n/2;
	p=x;
	q=y;
	for(i=2;i<=n*n;i++)
	{
		if(p==0) x=n-1;
		else x=p-1;
		if(q==n-1) y=0;
		else y=q+1;
		if((p==0 && q==n-1) || (a[x][y]>0 && a[x][y]<=n*n)) 
		{
			a[p+1][q]=i;
			p++;
			continue;
		}
		a[x][y]=i;
		p=x;
		q=y;
	}
	printf("魔方阵：\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			printf("%10d",a[i][j]);
		printf("\n");
	}
	return 0;
}

	
