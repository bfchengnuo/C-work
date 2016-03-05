#include<stdio.h>
int jiaohuan(int a,int b);  //暴露英语水平了。。。
int main()
{
        int a,b,c;
        scanf("%d%d",&a,&b);
        jiaohuan(a,b);
}
int jiaohuan(int a,int b)
{
        int c;
        c = a;
        a = b;
        b = c;
	printf("%d %d",a,b);
        return 0;
}
-----------------------分割线 指针操作-------------------------------
#include<stdio.h>
int jiaohuan(int *a,int *b);
int main()
{
        int a,b;
        scanf("%d%d",&a,&b);
        jiaohuan(&a,&b);
        printf("%d %d \n",a,b);
}
int jiaohuan(int *a,int *b)
{
        int c;
        c = *a;
        *a = *b;
        *b = c;
        return 0;
}