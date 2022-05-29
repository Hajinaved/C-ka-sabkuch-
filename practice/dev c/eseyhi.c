// Program to add numbers until the user enters zero

#include <stdio.h>
int main()
{
int n, sum =0;

   for(int i=0;i<=4;i++){
  scanf("%d\n",&n);
  
   if(n == 0){continue;
   }sum+=n;//sum+n=sum
   }printf("%d is sum\n",sum);

    return 0;
}
