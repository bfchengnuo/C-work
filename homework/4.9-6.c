#include <stdio.h>
int main()
{
	int a;
	for (a=0;a<1001;a++)
	{
		if(a%3==0&&a%5==0&&a%7==0)
			printf("%d\n",a);
	}

	return 0;
}