#include<stdio.h>
#include<conio.h>
int main(){
int n,posi = 0,negi = 0;
printf("enter the number of elements\n");
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++){
    printf("enter the element\n");
    scanf("%d",&arr[i]);
}
for(int i=0;i<n;i++){
    if(arr[i]>0){
        posi+=arr[i];
    }
    else if(arr[i]<0){
        negi+=arr[i];
    }
}
printf("sum of positive elements is :- %d\n",posi);
printf("sum of negative elements is :- %d\n",negi);
getch();
}




