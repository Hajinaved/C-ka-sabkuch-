#include<stdio.h>
int add(int num1,int num2)
{

    return num1+num2;

}
int sub(int num3,int num4)
{

    return num3-num4;

}
int mul(int num5,int num6)
{

    return num5*num6;
}
float div(float num7,float num8)
{

    return num7/num8;
}
void main()
{
    char p;
    int x,y,z;
    float w,s,q;
    printf("write numbers");
    scanf("%d%d",&x,&y);
    printf("select operator - \na-addition\nb-substraction\nc-multiplication\nd-division");
    scanf("%c",&p);
    switch(p){

case 'a':
        printf("write numbers");
    scanf("%d%d",&x,&y);
        z=add(x,y);
        printf("addition is %d",z);
        break;
    case 'b':
        printf("write numbers");
        scanf("%d%d",&x,&y);
        z=sub(x,y);
        printf("substraction is %d",z);
        break;
    case 'c':
        printf("write numbers");
        scanf("%d%d",&x,&y);
        z=mul(x,y);
        printf("division is %d",z);
    case 'd':
        printf("write numbers");
        scanf("%f%f",&w,&s);
        q=div(w,s);
        printf("division is %f",q);
        break;
    default :
        printf("pata tha tu chutiya he");}

        getch();

}

