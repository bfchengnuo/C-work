# include<stdio.h>
int main()
{
	int o[]={1,5,68,4,10,0,0,6,0,22,3,5,6,8,14,0},n[12],i,j=0;
	for(i=0;i<16;i++)
	{
		if(o[i]!=0)
		{
			n[j]=o[i];
			j++;
		}
	}
	printf("新数组为：\nn[]={");
	for(j=0;j<12;j++)
		printf("%d,",n[j]);
	printf("\b}\n");
	return 0;
}