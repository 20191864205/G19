#include <stdio.h>
int main()
{
	int a[15],i,x,low,high,mid;
	printf("请输入15个由大到小的数：");
	scanf("%d",&a[0]);
	i=1;
	while(i<15)
	{
		scanf("%d",&a[i]);
		if(a[i]<=a[i-1])
			i++;
		else
			printf("请重新输入此数：\n");
	}
	printf("\n");
	for(i=0;i<15;i++)
		printf("%5d",a[i]);
	printf("请输入一个需要被查找的数：\n");
	scanf("%d",&x);
	low=0;	
	high=14;	
	 while (low <= high){
        mid = (low + high) / 2;
        if (x > a[mid])
            high = mid - 1;
        else if (x < a[mid])
            low = mid + 1;
        else if (x == a[mid]){
            printf("%d is %dth number!\n", x, mid+1);
            break;
        }
    }
    if (x != a[mid])
        printf("No match!\n");
    return 0;
}

