// Program to add numbers until the user enters zero

#include <stdio.h>
int main()
{
int n;
scanf("%d\n",&n);
   for(int i=0;i<=n;i++){
   	printf("%d \n",i);
   if(i == 10){break;
   }
   }printf("loop is ended\n");

    return 0;
}
