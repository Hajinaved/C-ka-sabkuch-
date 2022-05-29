#include<stdio.h>
#include<conio.h>
 int main()
{
char st[25],*p;
int i=0;
printf("enter any string to get number of vowels in it\n");
gets(st);
p=st;
 while(*p!='\0'){
    if(*p=='A'||*p=='a'||*p=='E'||*p=='e'||*p=='I'||*p=='i'||*p=='O'||*p=='o'||*p=='U'||*p=='u')
        {
        i++;
        }
    p++;}

printf("%d vowel are present in string %s\n",i,st);
getch();
return 0;
}
/*int vowel(char *p){
    int i=0;
    while(*p!='/0'){
    if(*p =='A'||*p =='a'||*p =='E'||*p =='e'||*p =='I'||*p =='i'||*p=='O'||*p=='o'||*p=='U'||*p=='u')
        {
        i++;
        }
    p++;}
    return i;

}
*/