#include <stdio.h>
#include<conio.h>
int main(int argc, char const *argv[])
{
     int n,d,y,m;
     printf("enter number ogf days\n");
     scanf("%d",&n);
     y=n/365;
     m=(n-365*y)/30;
     d=n-y*365-m*30;
     printf("in %d days there is\n%d years\n%d months\n%d days left\n",n,y,m,d);
     getch();
	return 0;
}