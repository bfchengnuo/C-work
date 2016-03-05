
#include<stdio.h>
int sxss(int n);
void main()
{
	int n;
	printf("输入'0'将会输出100~200以内的所有素数；否则，输入任意数字(除0以外)将会判断该数是否为素数。\n请输入：");
	scanf("%d",&n);
	if(n==0)
	{
		for(n=100;n<201;n++)	//为函数sxss传递值
			if(sxss(n)==1)
				printf("%d\n",n);
	}
	else
		sxss(n)==0?printf("0(非素数)\n"):printf("1(是素数)\n");
}
int sxss(int n)
{
	int i,t;
	
	for(i=2;i<=n/2;i++)
	{
		t=0;         
		
		if(n%i==0)
		{
			t=1;
			return 0;
			break;
		}
	}
	if(t==0)
	{
		return 1;
	}
	
	
}