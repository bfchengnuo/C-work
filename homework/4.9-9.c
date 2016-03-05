#include <stdio.h>
#include <math.h>
int main()
{
	int a,n,i,s=0,t;
	scanf("%d%d",&a,&n);
	for (i=1;i<=n;i++)
	{
		t = (a-a*pow(10,i))/(-9);
		s += t; 
	}
	printf("%d\n",s);
	return 0;
}

---------------------------------分割线-----------------------------------

#include <stdio.h>
#include <math.h>
int main()
{
	int a,n,s=0,i,j;  //新版的GCC可能会截尾，有误差请改为double
	scanf("%d%d",&a,&n);
	for(i=1;i<=n;i++)
		for(j=0;j<i;j++)
			s += a*pow(10,j);  //pow函数的返回值为double，所以截尾现象请改成double类型
	printf("%d\n",s);
	return 0;
}