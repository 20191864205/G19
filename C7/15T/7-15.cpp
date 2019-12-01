#include <stdio.h>
#include <string.h>

int main()
{
	void input_num_name(double num[], char name[][16], int n);
	void sort_num_name(double num[], char name[][16], int n); 
	void seek_num_name(double num[], char name[][16], int n, int seek_num);
	double num[100],seek_num;
	int n;
	char name[100][16];
	printf("输入员工个数：");
	scanf("%d", &n);
	input_num_name(num, name, n);
	sort_num_name(num, name, n);
	printf("请输入您要查找的员工工号：");
	scanf("%lf", &seek_num);
	seek_num_name(num, name, n, seek_num);
	return 0;
}

void input_num_name(double num[], char name[][16], int n)
{
	int i;
	printf("请输入员工的工号和姓名:\n");
	for(i=0;i<n;i++)
	{
		scanf("%lf", &num[i]);
		gets(name[i]);
	}
} 

void sort_num_name(double num[], char name[][16], int n)
{
	int i,j;
	double temp_num;
	char temp_name[16];
	for(i=0;i<n;i++){
		for(j=0;j<n-i-1;j++){
			if(num[j]>num[j+1]){
				temp_num = num[j];
				num[j] = num[j+1];
				num[j+1] = temp_num;
				strcpy(temp_name,name[j]);
				strcpy(name[j],name[j+1]);
				strcpy(name[j+1],temp_name);

			}
		}
	}
	for(i=0;i<n;i++){
		printf("工号：%.0lf 姓名：%s\n", num[i], name[i]);
	} 
} 

void seek_num_name(double num[], char name[][16], int n, int seek_num)
{
	int low = 0;
	int high = n-1;
	int mid;
	int i=1;
	while(low <= high){
		mid = (high+low)/2;
		if(num[mid]==seek_num)
		{	
			printf("您要查找的员工信息如下：\n工号：%.0lf 姓名：%s\n", num[mid], name[mid]);
			break;
		}
		else if(num[mid]>seek_num)
		{
			high = mid-1;
		}
		else
		{
			low = mid+1;
		}
	}
		if(low > high)
			printf("本公司暂无此员工！");
}
