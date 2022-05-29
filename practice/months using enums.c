#include<stdio.h>
#include<conio.h>
enum months{
	january=1,
	febuarary=2,
	march=3,
	april=4,
	may=5,
	june=6,
	july=7,
	august=8,
	september=9,
	october=10,
	november=11,
	december=12
}choose;
int main(){
int n;
printf("enter any number between   0-12  to get month");
scanf("%d",&n);
choose=n;
printf("%s",choose);
getch();
return 0;
	
}