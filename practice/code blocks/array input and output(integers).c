#include<stdio.h>
#include<conio.h>
int main(){
    int n;

    printf("enter the number of elements in array\n");
    scanf("%d",&n);
    int maakichu[n];
    for(int i=0;i<n;i++)
    {
        printf("enter %dth element (character) \n",i+1);
        scanf("%d",&maakichu[i]);
    }
    printf("now all elements are entered\n");
    for(int i=0;i<n;i++)
    {
        printf("element no. %d is %d\n",i+1,maakichu[i]);
    }
    return 0;
}
