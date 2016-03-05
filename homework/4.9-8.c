# include<stdio.h>
int main()
{
	int a,ge,shi,bai,qian,wan;
	scanf("%d",&a);
	wan = a/10000;  //看不懂的去翻翻数学书吧
	qian = (a-wan*10000)/1000;
	bai = (a-qian*1000-wan*10000)/100;
	shi = (a-bai*100-qian*1000-wan*10000)/10;
	ge = a%10;
	if(a<10)
		printf("这是一个一位数\n");
	else if (a<100)
		printf("这是一个二位数，个位数是%d,十位数是%d\n逆向输出为%d%d\n",ge,shi,ge,shi);
	else if (a<1000)
		printf("这是一个三位数，个位数是%d,十位数是%d,百位数是%d\n逆向输出为%d%d%d\n",ge,shi,bai,ge,shi,bai);
	else if (a<10000)
		printf("这是一个四位数，个位数是%d,十位数是%d,百位数是%d,千位数是%d\n逆向输出为%d%d%d%d\n",
		ge,shi,bai,qian,ge,shi,bai,qian);
	else if (a<100000)
		printf("这是一个五位数，个位数是%d,十位数是%d,百位数是%d,千位数是%d,万位数是%d\n逆向输出为%d%d%d%d%d\n",
		ge,shi,bai,qian,wan,ge,shi,bai,qian,wan);
	return 0;
}
//算法可以优化，懒得改了，另外可以看出我的英语没救了

----------------------------分割线--------------------------------------------
//比较智能化，可以自由控制，，自行体验
# include<stdio.h>
int main()
{
	int a,w,q,b,s,g;
	
	char ch;
	do
	{
		printf("请输入一个不多于五位的正整数：\n");
t:
		scanf("%d",&a);
		w=a/10000;      //利用取余分离位数
		q=a%10000/1000;
		b=a%1000/100;
		s=a%100/10;
		g=a%10;
		if(a>0&&a<100000)
		{
			if(a<10)
				printf("这是个一位数，个位为%d，逆序排列为%d\n",a,a);
			else if(a<100)
			{
				printf("这是个两位数，个位为%d，十位为%d，逆序排列为%d%d\n",g,s,g,s);
			}
			else if(a<1000)
			{	
				printf("这是个三位数，个位为%d，十位为%d，百位为%d，逆序排列为%d%d%d\n",g,s,b,g,s,b);
			}
			else if(a<10000)
			{
				printf("这是个四位数，个位为%d，十位为%d，百位为%d，千位为%d，逆序排列为%d%d%d%d\n",g,s,b,q,g,s,b,q);
			}
			else if(a<100000)
			{
				printf("这是个五位数，个位为%d，十位为%d，百位为%d，千位为%d，万位为%d，逆序排列为%d%d%d%d%d\n",g,s,b,q,w,g,s,b,q,w);
			}
		}
		else
		{
			printf("输入错误，请重新输入:\n");goto t;
		}
		printf("继续请输入y，结束请输入任意字符\n");
		scanf(" %c",&ch);
	}
	while(ch=='y');
	return 0;
}