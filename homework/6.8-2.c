# include<stdio.h>
# define n 400
void main()
{
	int js(char a[]);
	char a[n];
	gets(a);    //输入数组
	printf("共有%d个数字字符\n",js(a));
	
}
int js(char a[])      
{
	int i,t=0;
	for(i=0;i<n;i++)    //筛选数字
	{
		if(a[i]>='0'&&a[i]<='9')
			t++;      //计数
	}
	
	return t;	
}
