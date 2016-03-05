#include <stdio.h>
int main()
{
	char ch;
	printf("请输入一个字母\n");
	scanf("%c",&ch);
	if (ch>85&&ch<96)	//如果+5超出字母ascii码范围，那就-26重新循环
	{
		ch=ch+5-26;
		printf("%c\n",ch);
	}
	else if (ch>117)
	{
		ch=ch+5-26;
		printf("%c\n",ch);
	}
	else	//没有超出范围直接+5输出
	{
		ch=ch+5;
		printf("%c\n",ch);
	}
	return 0;
}