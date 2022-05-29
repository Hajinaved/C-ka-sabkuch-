#include<stdio.h>
#include<conio.h>
int main(){
    int n,max,min,su=0;
    printf("enter the number of elements \n");
    scanf("%d",&n);
    int arr[n];
    max=arr[0];
    min=arr[0];
    printf("now enter the elements\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        su+=arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    for(int i=0;i<n;i++){
    if(arr[i]<min){
        min=arr[i];
    }
    }
    printf("maximum value is %d\n",max);
    printf("minimum value is %d\n",min);
    printf("average is %d\n",su/n);
}
