#include <stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	if (a>=90)
		printf("A\n");
	else if (a>=80)
		printf("B\n");
	else if (a>=70)
		printf("C\n");
	else if(a>=60)
		printf("D\n");
	else
		printf("E\n");
	return 0;
}
//可以折腾下用switch语句，效率会好点

———————————分割线———————————————–
#include < stdio.h >
int main ( void )
{
    int a;
    printf ( “输入一个百分制数：” );
    scanf(“%d”,&a);
    switch ( a/10 )
    {
        case 10:
        case 9: printf ( “A\n” );break;
        case 8: printf ( “B\n” );break;
        case 7: printf ( “C\n” );break;
        case 6: printf ( “D\n” );break;
        default: printf ( “E\n” );break;
    }

    return 0; 
}