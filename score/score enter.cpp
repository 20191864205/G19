#include "stdio.h"
#include "string.h"
#define N 99			//N+1Ϊѧ������
char	xm[101][20];	//ѧ������
char	xh[101][20];	//ѧ��ѧ��
char	km[11][20];		//��Ŀ��
int		cj[101][20];	//�ɼ�
int		zf[101];		//ѧ���ܷ�
int		pj[11];			//����ƽ����
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
		case 1 :xsxx();break;		//����ѧ��������ѧ��
		case 2 :kmm();break;		//����ʮ����Ŀ��
		case 3 :drdk();break;		//���˵��Ƴɼ�¼��
		case 4 :grcj();break;		//���˳ɼ�����¼��
		case 5 :kmpl();break;		//��Ŀ�ɼ�����¼��
		case 6 :cjcx();break;		//���˳ɼ���ѯ
		case 7 :dkpm();break;		//���Ƴɼ�����
		case 8 :zfpm();break;		//�ܳɼ�����
		case 9 :sjdc();break;		//���ݵ���
		case 10 :sjdr();break;		//���ݵ���
		case 11 :ckqk();break;		//�鿴��ǰ¼�����
		case 12 :xhpx(xh,xm,cj);break;			//��ѧ�Ž�������
		case 13 :prpj();break;		//�鿴����ƽ����
		case 14 :przf();break;		//�鿴�����ܷ�
		case 15 :cjgl();
				printf("�ɼ�������\n");break;	//�ɼ�����
		case 16 :flag=0;break;		//��ֹ����
		}
		jszf();						//�����ֺܷ�ƽ����
	}
	return 0;
}

void ckqk()
//�����ǰ¼�����
{
	int		i,j;
	printf("����\tѧ��\t\t");
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
//��Ŀ����¼��
{
	printf("��������Ҫ¼���ʮ����Ŀ��\n");
	for(int i=0;i<=9;i++)
		scanf("%s",&km[i]);
}

void xsxx()
//ѧ����Ϣ¼��
{
	void xhpx(char x[][20],char y[][20],int z[][20]);
	printf("����������Ҫ¼��ɼ���һ����ѧ����������ѧ�ţ�\n");
	for(int i=0;i<=N;i++)
	{
		printf("ѧ��%d������",i+1);
		scanf("%s",&xm[i]);
		printf("ѧ��%dѧ�ţ�",i+1);
		scanf("%s",&xh[i]);
	}
	xhpx(xh,xm,cj);
}

void xhpx(char x[][20],char y[][20],int z[][20])
//������x����С�����˳���������
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
//����ѡ��
{
	int n;
	printf("�����б�\n");
	printf(" 1��ѧ����Ϣ¼��\n");
	printf(" 2����Ŀ����¼��\n");
	printf(" 3�����˵���¼��\n");
	printf(" 4�����˳ɼ�¼��\n");
	printf(" 5����Ŀ����¼��\n");
	printf(" 6�����˳ɼ���ѯ\n");
	printf(" 7�����Ƴɼ�����\n");
	printf(" 8���ܳɼ�����\n");
	printf(" 9�����ݵ���\n");
	printf("10�����ݵ���\n");
	printf("11��¼�����\n");
	printf("12����ѧ������\n");
	printf("13���鿴����ƽ����\n");
	printf("14���鿴ѧ���ܷ�\n");
	printf("15����¼��ĳɼ����㣨�˹����޷����أ������ؿ��ǣ�\n");
	printf("16����������\n");
	printf("��ѡ����Ҫ���еĹ��ܣ�");
	scanf("%d",&n);
	return(n);
}

int kmxz()
//��Ŀѡ��
{
	char	a[20];
	printf("�������Ŀ����");
	scanf("%s",&a);
	for(int x=0;x<=9;x++)
		if(strcmp(a,km[x])==0)
			return(x);
}

void dkpm()
//ĳһ�Ƶ�����
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
//�����ڵ������������ֻ�������ѧ�ź�ĳ�Ƴɼ�
{
	int		i;
	printf("����\tѧ��\t\t");
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
//�������гɼ�
{
	for(int i=0;i<=N;i++)
		for(int j=0;j<=9;j++)
			cj[i][j]=0;
}

void jszf()
//�����ֺܷ�ƽ����
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
//��������ܷ�
{
	printf("����\tѧ��\t\t�ܷ�\n");
	for(int i=0;i<=N;i++)
	{
		printf("%s\t",xm[i]);
		printf("%s\t",xh[i]);
		printf("%d\n",zf[i]);
	}
}

void prpj()
//�������ƽ����
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
//�ܷ�����
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
//���Ҷ�Ӧѧ��ѧ��
{
	char	a[20];
	printf("��������Ҫ���ҵ�ѧ��ѧ�ţ�");
	scanf("%s",&a);
	for(int y=0;y<=N;y++)
		if(strcmp(a,xh[y])==0)
			return(y);
}

void drdk()
//���˵��Ƴɼ�¼��
{
	int kmxz();
	int xhcx();
	int		y = xhcx();
	int		x = kmxz();
	printf("ѧ��%s��%sͬѧ��%s�ɼ�Ϊ��",xh[y],xm[y],km[x]);
	scanf("%d",&cj[y][x]);
}

void grcj()
//���˳ɼ�¼��
{
	int xhcx();
	int		y = xhcx();
	printf("������ѧ��%s��%sͬѧ�ĳɼ���\n",xh[y],xm[y]);
	for(int x=0;x<=9;x++)
	{
		printf("%s:",km[x]);
		scanf("%d",&cj[y][x]);
	}
}

void kmpl()
//��Ŀ�ɼ�����¼��
{
	int kmxz();
	void xhpx(char x[][20],char y[][20],int z[][20]);
	xhpx(xh,xm,cj);
	int		x = kmxz();
	printf("�밴ѧ��˳��¼��ѧ����%s�ɼ���\n",km[x]);
	for(int i=0;i<=N;i++)
	{
		printf("������ѧ��Ϊ%s��%sͬѧ��%s�ɼ���",xh[i],xm[i],km[x]);
		scanf("%d",&cj[i][x]);
	}
	printf("%s�ɼ�¼�����\n",km[x]);
}

void cjcx()
//ѧ���ɼ���ѯ
{
	int xhcx();
	int		i;
	int		y = xhcx();
	printf("����\tѧ��\t\t");
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
//���ݵ���
{
	FILE *fp;
	fp = fopen("D:\\Users\\homework\\Desktop\\�ɼ�����.txt","wb");		
	fwrite(&xm[0][0],101*20,1,fp);
	fwrite(&xh[0][0],101*20,1,fp);
	fwrite(&km[0][0],11*20,1,fp);
	fwrite(&cj[0][0],101*20,sizeof(cj),fp);
	fwrite(&zf[0],101,sizeof(zf),fp);
	fwrite(&pj[0],10,sizeof(pj),fp);
	fclose(fp);
}

void sjdr()
//���ݵ���
{
	FILE *fp;
	fp = fopen("D:\\Users\\homework\\Desktop\\�ɼ�����.txt","rb");		
	fread(&xm[0][0],101*20,1,fp);
	fread(&xh[0][0],101*20,1,fp);
	fread(&km[0][0],11*20,1,fp);
	fread(&cj[0][0],101*20,sizeof(cj),fp);
	fread(&zf[0],101,sizeof(zf),fp);
	fread(&pj[0],10,sizeof(pj),fp);	
	fclose(fp);
}