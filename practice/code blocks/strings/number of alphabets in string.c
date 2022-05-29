#include<stdio.h>
#include<conio.h>
int strn(int  *p);
int xstrcpy(int *n,char *f);
void main()
{
    char s[100];
    int a[100];
    int m;
    printf("write any word\n");
    gets(s);
    xstrcpy(a,s);
    m = strn(a);
    printf("no. of alphabet in your word is %d",m);
    getch();
    }
int strn(int *p)
{int count=0;
	
while(*p!='\0')
{
	if ((*p>=65)&&(*p<=90)||(*p>=97)&&(*p<=122)){
    	 count++;
    }
    p++;
}
return count;
}
 int xstrcpy(int *n,char *f){
    while (*f!='\0'){
       *n = getchar();
       f++;
       n++;
    }
    *n='\0';
    
}
