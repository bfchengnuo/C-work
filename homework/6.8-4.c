#include<stdio.h>
# define n 50    //最大可算50阶的矩阵
void zzsz(int a[][n],int b[][n],int x,int y);
int i,j;
void main()
{
	int x,y,a[n][n],b[n][n];
	printf("请输入矩阵的行，列：\n");
	scanf("%d%d",&x,&y);
	printf("请输入这个%d*%d矩阵：\n",x,y);
	for(i=0;i<y;i++)
	{
		for(j=0;j<y;j++)
			scanf("%d",&a[i][j]);
	}
	printf("输入的矩阵为:\n");
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
			printf("%d\t",a[i][j]);
		printf("\n");
	}
	printf("该数组的转置矩阵为：\n");
	zzsz(a,b,x,y);
}
void zzsz(int a[][n],int b[][n],int x,int y)
{	
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
			b[j][i]=a[i][j];
	}
	for(i=0;i<y;i++)
	{
		for(j=0;j<x;j++)
			printf("%d\t",b[i][j]);
		printf("\n");
	}
}