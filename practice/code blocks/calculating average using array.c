#include<stdio.h>
#include<conio.h>

int main(){
     int n,s = 0;
     printf("enter the number of terms\n");
     scanf("%d",&n);
     int add[n];
     for(int i=0;i<n;i++){
        printf("enter the %dth term\n",i+1);
        scanf("%d",&add[i]);
        s=s+add[i];
     }
     printf("the average is %d\n",s/n);
     return 0;
     }
