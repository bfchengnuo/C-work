# include<stdio.h>
   int main()
{

	int a[4][4]={{1,2,3,4},{2,2,5,6},{3,5,3,7},{4,6,7,4}},s=0,i,j,c=0;
    printf("原数组为：a[4][4]={{1,2,3,4},{2,2,5,6},{3,5,3,7},{4,6,7,4}}");
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			if((i==j)||(i+j==3))
				s+=(a[i][j]*a[i][j]);		
			if(a[i][j]==a[j][i])
				c++;
		}
	}
	printf("对角线元素平方和为：%d，",s);
	if(c==16)	
		printf("且该数组是对称二维数组\n该数组的转置数组为：\na[j][i]={");
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d,",a[j][i]);
		}
	}
	printf("\b}\n");
	return 0;
}