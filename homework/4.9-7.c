# include<stdio.h>
int main()
{
	int a,b,c;
	printf("请输入三角形的三边长\n");
	scanf("%d%d%d",&a,&b,&c);
	if (a+b>c&&a+c>b&&b+c>a)
	{	
		if (a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a)
			printf("直角三角形\n");
		else if (a==b==c)
			printf("这是等边三角形\n");
		else if (a==b||a==c||b==c)
			printf("这是等腰三角形\n");
	}
	else
		printf("构不成三角形\n");
	return 0;
}