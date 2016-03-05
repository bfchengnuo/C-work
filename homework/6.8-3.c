#include<stdio.h>
void px(int a[],int n);
void main()
{
	int a[1000],i,n;
	printf("请输入要排几个数：\n");
	scanf("%d",&n);
	printf("输入要排序的%d个数:\n",n);
	for(i=0;i<n;i++)  //输入数组各元素
		scanf("%d",&a[i]);
	px(a,n);
	printf("从小到大排序为：\n");
	for(i=0;i<n;i++)
		printf("%d<",a[i]);
	printf("\b \n");
}
/*选择排序法简写*/
void px(int a[],int n)     // a[]==*a;地址变化，可以影响主函数的值，
/*{
	int t,j,i;
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
			if(a[i]>a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
}*/
//插入排序法解题
{
	int t,i,j;
	for(i=0;i<n;i++)
	{
		t=a[i];
	for(j=i-1;j>=0;j--)
		if(a[j]>t)
			a[j+1]=a[j];
		else
			break;
		a[j+1]=t;
	}
}