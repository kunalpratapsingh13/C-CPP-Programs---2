#include<stdio.h>
#include<conio.h>
//clrscr();
int main()
{
	int ba;
	float gross,hra=0.2,da=0.2;
	printf("\nENTER BASIC SALARY:");
	scanf("%d",&ba);
	hra=20*ba/100;
	da=40*ba/100;
	gross=ba+hra+da;
	printf("\nTHE GROSS SALARY IS:%0.2f",gross);
	getch();
}
