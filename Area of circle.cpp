#include<stdio.h>
#include<conio.h>
//clrscr();
int main()
{
	float pi=3.14,area,rad;
	printf("\nENTER THE RADIUS OF THE CIRCLE:");
	scanf("%f",&rad);
	area=pi*rad*rad;
	printf("\nAREA OF THE CIRCLE IS:%0.2f",area);
	getch();
}
