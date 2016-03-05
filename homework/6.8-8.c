
# include<stdio.h>
float qh(int n);
void main()
{
	int n;
	printf("请输入（s=1+1/1+2+1/1+2+3+……+1/1+2+3+……+n）中的n值\n输入：");
	scanf("%d",&n);
	printf("s=%f\n",qh(n));
}
float qh(int n)
{
	float i,t=0,s=0;
	for(i=1;i<=n;i++)
	{
		t+=i;
		s+=1/t;
	}
	return s;
}
-----------------分割线------------------
**********输出分数**************
//需要优化，可计算的n的值太小，最大只能到8,望大家优化.......
# include<stdio.h>
void qh(int n);
void main()
{
	int n;
	printf("请输入（s=1+1/1+2+1/1+2+3+……+1/1+2+3+……+n）中的n值\n输入：");
	scanf("%d",&n);
	qh(n);
}
void qh(int n)
{
	long int a,b,x,i,u=1,t=1,s=0;
	for(i=2;i<=n;i++)
	{
		t+=i;
		u*=t;
	}
	t=1;
	for(i=2;i<=n;i++)
	{
		t+=i;
		x=u/t;
		s+=x;
	}
	s=s+u;
	a=s;
	b=u;
	while(u!=0)
	{
		t=s%u;
		s=u;
		u=t;
	}
	printf("s=%d/%d\n",a/s,b/s);
}
