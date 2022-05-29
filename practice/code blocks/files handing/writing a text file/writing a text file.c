#include <stdio.h>
#include <stdlib.h>
 int main()
{ 
    char *f;
 //  printf("enter the number of character you want \n");
   // scanf("%d",&m);
    f=malloc(sizeof(char));
FILE *fptr; 
// use appropriate location if you are using MacOS or Linux 
fptr = fopen("C:\\Users\\ARBAB\\Documents\\code blocks\\files handing\\writing a text file\\writing a text file.txt","w"); 
if(fptr == NULL) //if the file is not assigned to ptr pointer
{ printf("Error!"); 
exit(1); }
printf("now enter string\n"); 
fflush(stdin);
gets(f);
fprintf(fptr,"%s\n",f); 
fclose(fptr); 
return 0;}