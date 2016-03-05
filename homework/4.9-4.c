# include<stdio.h>
int main()
{

   float a,b; 
   char t;
   scanf("%f%c%f",&a,&t,&b);
   switch(t)
   {
       case '+': printf("%d\n",a+b);break;
       case '-': printf("%d\n",a-b);break;
       case '*': printf("%d\n",a*b);break;
       case '/': printf("%f\n",a/b);break;

   }
   return 0;
}