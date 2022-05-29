#include<stdio.h>
#include<conio.h>
int pow(int b,int p);
int  main()
{

    int power,base,answer;
    printf("enter the base number and power\n ");
    scanf("%d%d",&base,&power);
    answer = pow(base,power);
    printf("%d\n",answer);
getch();
return 0;
}
int pow(int b,int p){
if(p==1){
    return b;
}
else{
        return b*pow(b,p-1);

}
}
