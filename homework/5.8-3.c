# include<stdio.h>
int main()
{
	int  a[8]={1,5,7,0,16,9,12,6},b[5]={42,23,35,15,18},c[13],i,t,j=0;
	printf("新数组为：\nc[13]={");
	for(i=0;i<13;i++)        /*合并数组*/
	{
		if(i<8)
			c[i]=a[i];
		else
		{
			c[i]=b[j];
			j++;
		}
		printf("%d,",c[i]);
	}
	printf("\b}\n");
	for(i=0;i<13;i++)      /*冒泡排序法解题*/
	{
		for(j=0;j<13-i;j++)
		{
			if(c[j]>c[j+1])
			{
				t=c[j];
				c[j]=c[j+1];
				c[j+1]=t;
			}
		}
	}
	printf("升序排列为：\nc[13]={");
	for(j=0;j<13;j++)
		printf("%d,",c[j]);
	printf("\b}\n");
	return 0;
}
