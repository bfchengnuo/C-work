# include<stdio.h>
# include<string.h>
int main()
{
	char s[20],str[3][20];
	int i;
	for(i=0;i<3;i++)
	{
		gets(str[i]);
		if(i<2)              //挨个与str[2]比较
			strcpy(s,str[i]);
		if(strcmp(str[2],s)<0)   
			strcpy(s,str[2]);
	}
	printf("最小的字符串为：\n%s\n",s);
	return 0;
}
