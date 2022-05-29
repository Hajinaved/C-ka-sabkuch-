#include<stdio.h>
#include<conio.h>
int cube(int n){
if(n==1){
    return 1;
}
else{
    return (n*n*n)+cube(n-1);
}
}
int main(){
    int input,output;
    scanf("%d",&input);
    output=cube(input);
    printf("sum of cubes till number %d is %d\n",input,output);
    getch();
    return 0;


}
