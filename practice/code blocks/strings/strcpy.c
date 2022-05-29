#include<stdio.h>
#include<conio.h>
#include<string.h>
 int main()
{
    char str1[10] = "Hello";
    char str2[10];

strcpy(str2,str1);
 //   strncpy(str2,str1,sizeof(str2));//it is used to copy a paart of string to another stirng
    //printf("%s\n",strcpy(str2,str1));
    printf("%s",str2);



getch();
return 0;
}
