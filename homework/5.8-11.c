# include<stdio.h>
# include<string.h>
int main()
{
    int i,j,n;
	char a[100][10],t[10];     //最大可测100个长度为10的单词
	printf("请输入排序的单词数目:\n");
	scanf("%d",&n);
	printf("请输入这%d个单词：\n",n);
	for(i=0;i<5;i++)
	{
		scanf("%s",a[i]);	//可用gets代替
	}
	printf("\n");
	for(i=0;i<n-1;i++)       //选择排序法简写
	{
		for(j=i+1;j<n;j++)
			if(a[i][0]>a[j][0])
			{
				strcpy(t,a[i]);
				strcpy(a[i],a[j]);
				strcpy(a[j],t);
			}	
			
	}
	printf("按字母顺序排列为：\n");
	for(i=0;i<n;i++)
		puts(a[i]);
	return 0;
}