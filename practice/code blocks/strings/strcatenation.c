#include<stdio.h>
#include<conio.h>
 int main()
{
char str1[100];
char str2[100];
char str3[100];
printf("enter the statement for 1st string\n");
gets(str1);
printf("enter the statement for 2nd string\n");
gets(str2);
printf("enter the statement for 3rd string\n");
gets(str3);
strcat(str1,str2);
strcat(str1,str3);
printf("%s\n",str1);
getch();
return 0;
}
