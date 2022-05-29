#include <stdio.h>
#include<conio.h>
#include <stdlib.h> 
int main()
{
 int num; FILE *fptr;
 if ((fptr = fopen("C:\\Users\\ARBAB\\Documents\\code blocks\\files handing\\reading a text file\\prog.txt","r")) == NULL)
{
printf("Error! opening file");
 // Program exits if the file pointer returns NULL. 
exit(1);
}
fscanf(fptr,"%d", &num); 
printf("Value of n=%d", num); 
fclose(fptr); 
getch();
return 0;
}