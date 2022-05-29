#include<stdio.h>
#include<conio.h>
 int main(int argc, char const *argv[])
{
   int n,h=1,m=1,s=1;
   printf("enter number of seconds\n");
   scanf("%d",&n);
   h=n/3600;
   m=(n-h*3600)/60;
   s=(n-(h*3600)-(m*60));


   printf("h:m:s\n \n %d:%d:%d\n",h,m,s);
   getch();
	return 0;
}