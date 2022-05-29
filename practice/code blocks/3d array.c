#include<stdio.h>
#include<conio.h>
int main(){
int n,m,b;
printf("enter the size of 3d array\n");
scanf("%d%d%d",&n,&m,&b);
int arr[n][m][b];
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        for(int k=0;k<b;k++){
            printf("enter the element no.%d of %d in %d\n",k+1,j+1,i+1);
            scanf("%d",&arr[i][j][k]);
        }
    }
}
for(int i=0;i<n;i++){
    printf("elements of %d are:-",i+1);
    for( int j=0;j<m;j++){printf("elements in %d are :-\n",j+1);
        for(int k=0;k<b;k++){
            printf("%d\n",arr[i][j][k]);
        }
    }
}
getch();
}
