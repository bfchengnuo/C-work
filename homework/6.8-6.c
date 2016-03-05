# include<stdio.h>
int gys(int a,int b);
void main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("%d\n",gys(a,b));
}
int gys(int a,int b)
{
	int t;
	if(a<b)
	{/*交换两个数，使大数放在a上*/
		t=a;
		a=b;
		b=t;
	}
	while(b!=0)
    {//利用辗除法
		t=a%b;
		a=b;
		b=t;
	}
	return a;
}