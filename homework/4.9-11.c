#include <stdio.h>
int main()
{
	int n,i,s,t=0;
	for (n=1,s;n<=20;n++)   //20个数相加，循环20次
	{
		s = 1;      
		for (i=1;i<=n;i++)      //计算n阶乘
		{
			s=s*i;
		}
		t=s+t;
	}
	printf("%d\n",t);
	return 0;
}