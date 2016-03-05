# include<stdio.h>
int main()
{
	int b=1,i=0;
	char a[1000];    //最大输入单词数为1000
	gets(a);              
	while(a[i]!='\0')
	{    
		 if(a[i]==' '&&a[i+1]!=' '&&a[i+1]!='\0')   /*计算单词数*/
			 b++;
		 i++;                          
	}
	printf("输入了%d个单词\n",b);
	return 0;
}