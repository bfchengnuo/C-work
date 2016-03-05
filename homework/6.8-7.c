# include<stdio.h>
# define n 50
int pddcsz(int a[][n],int x,int y);
int i,j;
void main()
{
	int x,y,a[n][n];
	printf("请输入矩阵的行，列：\n");
	scanf("%d%d",&x,&y);
	printf("请输入这个%d*%d矩阵：\n",x,y);
	for(i=0;i<x;i++)
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
	printf("该数组\n");    //条件表达式，自行看书。。
	pddcsz(a,x,y)==1?printf("1（是对称数组）\n"):printf("0（不是对称数组）\n");
}
int pddcsz(int a[][n],int x,int y)
{	
	int b=0;
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
			if(a[j][i]==a[i][j]) 
				b++;    
	}
	if(b==16)      //判断对称矩阵
		return 1;
	else
		return 0;
}