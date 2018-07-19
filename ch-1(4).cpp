#include<stdio.h>
#include<conio.h>
//clrscr();
int main()
{
	float farenheit,celsius;
	printf("\nENTER THE TEMPERATURE(IN FARENHEIT):");
	scanf("%f",&farenheit);
	celsius=(5*farenheit/9)-32;
	printf("\nTEMPERATURE IN CELSIUS:%0.2f",celsius);	
	getch();
}
