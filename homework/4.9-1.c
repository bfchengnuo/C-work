#include <stdio.h>
int main()
{
	int a,b,c,d,i;	
	printf("请输入4个数\n");
	scanf("%d%d%d%d",&a,&b,&c,&d);	//a，b，c，d用来存放四个整数，i起到交换变量中介的作用
	if (a>b)
	{
		i=a;
		a=b;
		b=i;
	}
	if (a>c)
	{
		i=a;
		a=c;
		c=i;
	}
	if (a>d)
	{
		i=a;
		a=d;
		d=i;
	}
	if (b>c)
	{
		i=b;
		b=c;
		c=i;
	}
	if (b>d)
	{
		i=b;
		b=d;
		d=i;
	}
	if (c>d)
	{
		i=c;
		c=d;
		d=i;
	}
	printf("%d%d%d%d\n",a,b,c,d);
	return 0;
}