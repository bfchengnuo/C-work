# include<stdio.h>
int main()
{
	int a[3]={1,2,3},b,c=0,i;
	scanf("%d",&b);
	for(i=0;i<3;i++)
	{	
		if(b==a[i])
			printf("下标为%d\n",i);
		else
			c++;
	}
	if(c==3)
		printf("-1\n");
	return 0;
}