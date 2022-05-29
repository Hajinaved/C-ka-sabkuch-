#include<stdio.h>
#include<conio.h>
int main(){

int sub,stu;
printf("enter the numbers of students in class and number of subjects\n");
scanf("%d%d",&stu,&sub);
int mar[stu][sub];
for(int i=0;i<stu;i++){
    printf("enter th marks for student no.%d\n",i+1);
    for(int j=0;j<sub;j++){

        printf("enter marks\n ");
        scanf("%d",&mar[i+1][j+1]);
    }
}
for(int i=0;i<stu;i++){
    printf("marks obtained by student no.%d are\n",i+1);
    for(int j=0;j<sub;j++){
    printf("%d\n",mar[i+1][j+1]);
     }
}

}
