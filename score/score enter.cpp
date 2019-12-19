#include "stdio.h"
#include "string.h"
#define N 99			//N+1为学生人数
char	xm[101][20];	//学生姓名
char	xh[101][20];	//学生学号
char	km[11][20];		//科目名
int		cj[101][20];	//成绩
int		zf[101];		//学生总分
int		pj[11];			//各科平均分
int main(int argc, char* argv[])
{
	int gnxz();
	void sjdc();
	void sjdr();
	void cjcx();
	void kmpl();
	void drdk();
	void grcj();
	void jszf();
	void zfpm();
	void dkpm();
	void przf();
	void prpj();
	void cjgl();
	void kmm();
	void xsxx();
	void xhpx(char x[][20],char y[][20],int z[][20]);
	void ckqk();
	int		flag=1;
	cjgl();
	while(flag)
	{
		switch(gnxz())
		{
		case 1 :xsxx();break;		//输入学生姓名及学号
		case 2 :kmm();break;		//输入十个科目名
		case 3 :drdk();break;		//单人单科成绩录入
		case 4 :grcj();break;		//个人成绩批量录入
		case 5 :kmpl();break;		//科目成绩批量录入
		case 6 :cjcx();break;		//单人成绩查询
		case 7 :dkpm();break;		//单科成绩排名
		case 8 :zfpm();break;		//总成绩排名
		case 9 :sjdc();break;		//数据导出
		case 10 :sjdr();break;		//数据导入
		case 11 :ckqk();break;		//查看当前录入情况
		case 12 :xhpx(xh,xm,cj);break;			//按学号进行排序
		case 13 :prpj();break;		//查看各科平均分
		case 14 :przf();break;		//查看个人总分
		case 15 :cjgl();
				printf("成绩已清零\n");break;	//成绩归零
		case 16 :flag=0;break;		//终止程序
		}
		jszf();						//计算总分和平均分
	}
	return 0;
}

void ckqk()
//输出当前录入情况
{
	int		i,j;
	printf("姓名\t学号\t\t");
	for(i=0;i<=9;i++)
		printf("%s ",km[i]);
	printf("\n");
	for(i=0;i<=N;i++)
	{
		printf("%s\t",xm[i]);
		printf("%s\t",xh[i]);
		for(j=0;j<=9;j++)
			printf("%d    ",cj[i][j]);
		printf("\n");
	}
}

void kmm()
//科目名称录入
{
	printf("请输入需要录入的十个科目：\n");
	for(int i=0;i<=9;i++)
		scanf("%s",&km[i]);
}

void xsxx()
//学生信息录入
{
	void xhpx(char x[][20],char y[][20],int z[][20]);
	printf("请输入你需要录入成绩的一百名学生的姓名及学号：\n");
	for(int i=0;i<=N;i++)
	{
		printf("学生%d姓名：",i+1);
		scanf("%s",&xm[i]);
		printf("学生%d学号：",i+1);
		scanf("%s",&xh[i]);
	}
	xhpx(xh,xm,cj);
}

void xhpx(char x[][20],char y[][20],int z[][20])
//以数组x的由小到大的顺序进行排序
{
	void ckqk();
	int		n,i,b;
	char	a[20];
	for(n=0;n<=N;n++)
	{
		for(i=n+1;i<=N;i++)
		{
			if(strcmp(x[n],x[i])>0)
			{
				strcpy(a,x[i]);
				strcpy(x[i],x[n]);
				strcpy(x[n],a);
				strcpy(a,y[i]);
				strcpy(y[i],y[n]);
				strcpy(y[n],a);
				for(int j=0;j<=9;j++)
				{
					b=z[i][j];
					z[i][j]=z[n][j];
					z[n][j]=b;
				}
				b=zf[i];
				zf[i]=zf[n];
				zf[n]=b;
			}
		}
	}
	ckqk();
}

int gnxz()
//功能选择
{
	int n;
	printf("功能列表：\n");
	printf(" 1、学生信息录入\n");
	printf(" 2、科目名称录入\n");
	printf(" 3、单人单科录入\n");
	printf(" 4、个人成绩录入\n");
	printf(" 5、科目批量录入\n");
	printf(" 6、单人成绩查询\n");
	printf(" 7、单科成绩排名\n");
	printf(" 8、总成绩排名\n");
	printf(" 9、数据导出\n");
	printf("10、数据导入\n");
	printf("11、录入情况\n");
	printf("12、按学号排序\n");
	printf("13、查看各科平均分\n");
	printf("14、查看学生总分\n");
	printf("15、将录入的成绩归零（此功能无法撤回，请慎重考虑）\n");
	printf("16、结束程序\n");
	printf("请选择您要进行的功能：");
	scanf("%d",&n);
	return(n);
}

int kmxz()
//科目选择
{
	char	a[20];
	printf("请输入科目名：");
	scanf("%s",&a);
	for(int x=0;x<=9;x++)
		if(strcmp(a,km[x])==0)
			return(x);
}

void dkpm()
//某一科的排名
{
	int kmxz();
	int i = kmxz();
	void prdk(int n);
	int		n,m,b;
	char	a[20];
	for(n=0;n<=N;n++)
		for(m=n+1;m<=N;m++)
			if(cj[m][i]>cj[n][i])
			{
				strcpy(a,xm[m]);
				strcpy(xm[m],xm[n]);
				strcpy(xm[n],a);
				strcpy(a,xh[m]);
				strcpy(xh[m],xh[n]);
				strcpy(xh[n],a);
				for(int j=0;j<=9;j++)
				{
					b=cj[m][j];
					cj[m][j]=cj[n][j];
					cj[n][j]=b;
				}
				b=zf[m];
				zf[m]=zf[n];
				zf[n]=b;
			}
	prdk(i);
}

void prdk(int n)
//套用在单科排名函数里，只输出姓名学号和某科成绩
{
	int		i;
	printf("姓名\t学号\t\t");
	printf("%s\n",km[n]);
	for(i=0;i<=N;i++)
	{
		printf("%s\t",xm[i]);
		printf("%s\t",xh[i]);
		printf("%d    ",cj[i][n]);
		printf("\n");
	}
}

void cjgl()
//清零所有成绩
{
	for(int i=0;i<=N;i++)
		for(int j=0;j<=9;j++)
			cj[i][j]=0;
}

void jszf()
//计算总分和平均分
{
	int		i,j;
	for(i=0;i<=N;i++)
		zf[i] = 0;
	for(i=0;i<=N;i++)
		for(j=0;j<=9;j++)
			zf[i]+=cj[i][j];
	for(i=0;i<=N;i++)
		for(j=0;j<=9;j++)
			pj[j]+=cj[i][j];
	for(j=0;j<=9;j++)
		pj[j]=pj[j]/(N+1);
}

void przf()
//输出个人总分
{
	printf("姓名\t学号\t\t总分\n");
	for(int i=0;i<=N;i++)
	{
		printf("%s\t",xm[i]);
		printf("%s\t",xh[i]);
		printf("%d\n",zf[i]);
	}
}

void prpj()
//输出各科平均分
{
	int i;
	for(i=0;i<=9;i++)
		printf("%s ",km[i]);
	printf("\n");
	for(i=0;i<=9;i++)
		printf("%d    ",pj[i]);
	printf("\n");
}

void zfpm()
//总分排名
{
	void przf();
	int		n,m,b;
	char	a[20];
	for(n=0;n<=N;n++)
		for(m=n+1;m<=N;m++)
			if(zf[m]>zf[n])
			{
				strcpy(a,xm[m]);
				strcpy(xm[m],xm[n]);
				strcpy(xm[n],a);
				strcpy(a,xh[m]);
				strcpy(xh[m],xh[n]);
				strcpy(xh[n],a);
				for(int j=0;j<=9;j++)
				{
					b=cj[m][j];
					cj[m][j]=cj[n][j];
					cj[n][j]=b;
				}
				b=zf[m];
				zf[m]=zf[n];
				zf[n]=b;
			}
	przf();
}

int xhcx()
//查找对应学号学生
{
	char	a[20];
	printf("请输入您要查找的学生学号：");
	scanf("%s",&a);
	for(int y=0;y<=N;y++)
		if(strcmp(a,xh[y])==0)
			return(y);
}

void drdk()
//单人单科成绩录入
{
	int kmxz();
	int xhcx();
	int		y = xhcx();
	int		x = kmxz();
	printf("学号%s的%s同学的%s成绩为：",xh[y],xm[y],km[x]);
	scanf("%d",&cj[y][x]);
}

void grcj()
//个人成绩录入
{
	int xhcx();
	int		y = xhcx();
	printf("请输入学号%s的%s同学的成绩：\n",xh[y],xm[y]);
	for(int x=0;x<=9;x++)
	{
		printf("%s:",km[x]);
		scanf("%d",&cj[y][x]);
	}
}

void kmpl()
//科目成绩批量录入
{
	int kmxz();
	void xhpx(char x[][20],char y[][20],int z[][20]);
	xhpx(xh,xm,cj);
	int		x = kmxz();
	printf("请按学号顺序录入学生的%s成绩：\n",km[x]);
	for(int i=0;i<=N;i++)
	{
		printf("请输入学号为%s的%s同学的%s成绩：",xh[i],xm[i],km[x]);
		scanf("%d",&cj[i][x]);
	}
	printf("%s成绩录入完毕\n",km[x]);
}

void cjcx()
//学生成绩查询
{
	int xhcx();
	int		i;
	int		y = xhcx();
	printf("姓名\t学号\t\t");
	for(i=0;i<=9;i++)
		printf("%s ",km[i]);
	printf("\n");
	printf("%s\t",xm[y]);
	printf("%s\t",xh[y]);
	for(i=0;i<=9;i++)
		printf("%d    ",cj[y][i]);
	printf("\n");
}

void sjdc()
//数据导出
{
	FILE *fp;
	fp = fopen("D:\\Users\\homework\\Desktop\\成绩数据.txt","wb");		
	fwrite(&xm[0][0],101*20,1,fp);
	fwrite(&xh[0][0],101*20,1,fp);
	fwrite(&km[0][0],11*20,1,fp);
	fwrite(&cj[0][0],101*20,sizeof(cj),fp);
	fwrite(&zf[0],101,sizeof(zf),fp);
	fwrite(&pj[0],10,sizeof(pj),fp);
	fclose(fp);
}

void sjdr()
//数据导入
{
	FILE *fp;
	fp = fopen("D:\\Users\\homework\\Desktop\\成绩数据.txt","rb");		
	fread(&xm[0][0],101*20,1,fp);
	fread(&xh[0][0],101*20,1,fp);
	fread(&km[0][0],11*20,1,fp);
	fread(&cj[0][0],101*20,sizeof(cj),fp);
	fread(&zf[0],101,sizeof(zf),fp);
	fread(&pj[0],10,sizeof(pj),fp);	
	fclose(fp);
}