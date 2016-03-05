#include <stdio.h>
int main()
{
	float a=2,b,t=1,i;
	float sum=2.0;
	for (i=1;i<20;i++)  //sum初始值为2所以循环19次即可
	{
		b = a;  //保存a的值
		a = a+t;    //更新为下次a（分子）的值
		t = b;      //更新t（分母）的值
		sum += a/t; 
	}
	printf("%f\n",sum);
	return 0;
}