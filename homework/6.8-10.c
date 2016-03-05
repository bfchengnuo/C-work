#include<stdio.h>
#include"string.h"
# define n 400     //可修改最大输入字符数
int jszm(char a[]);
void main()
{
	char a[n];
	printf("请输入一串字符：\n");
	gets(a);
	printf("共有%d个字母\n",jszm(a));
}
int jszm(char a[])    //筛选字母
{
	int b;
	b=strlen(a);
	int i,t=0;
	for(i=0;i<b;i++)
	{
		if(a[i]>='a'&&a[i]<='z'||a[i]>='A'&&a[i]<='Z')
			t++;
	}
	return t;	  //返回字母数
}
