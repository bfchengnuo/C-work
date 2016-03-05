#include<stdio.h>
void main()
{
	float s,h; //总路程，反弹高度
	s=100;  //s为到第一次落地经过的距离
    h=s/2;  //h为第一次反弹高度
	int i;  //控制循环次数
	for(i=2;i<=10;i++)  //为了好理解
	{
		s=s+2*h;    //第i次经过的距离
		h=h/2;     //第i次反弹高度
	}
	printf("第十次落地共经过%f米,第十次反弹%f米\n",s,h);
}
