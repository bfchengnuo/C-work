# include<stdio.h>
int main()
{
	float i;
	float n,s=0;
	for(i=1;i<=1000001/2;i++)
	{
    	n=1/(2*i-1);
		s+=n;
	}

	printf("%f\n",s);
	return 0;
}
------------------分割线------------------
#include <stdio.h>
#include <math.h>
int main()
{
	float a=1.0,s=1.0;
	while((1/a)>=pow(10,-6))
	{
		a += 2.0;
		s = s+(1/a);
	}
	printf("%f\n",s);
	return 0;
}