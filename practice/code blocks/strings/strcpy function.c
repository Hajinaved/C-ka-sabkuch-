#include<stdio.h>
#include<conio.h>
 int main()
{
char source[20];
char target[20];
printf("enter a string\n");
gets(source);
xstrcpy(target,source);

printf("%s\n ",target);
getch();
return 0;
}
xstrcpy(char *n,char *m){
    while (*m!='/0'){
        *m=*n;
        m++;
        n++;
    }
    *(n)='/0';
}
