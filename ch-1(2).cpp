#include<stdio.h>
#include<conio.h>
//clrscr();
int main()
{
	int km,m,cm;
	float feet,inch;
	printf("\nENTER THE DISTANCE BETWEEN THE TWO CITIES(in km):");
	scanf("%d",&km);
	m=km*1000;
	cm=km*100000;
	feet=km*3280.84;
	inch=km*39370.1;
	printf("\nDISTANCE BETWEEN THE TWO CITIES(in m):%d",m);
	printf("\nDISTANCE BETWEEN THE TWO CITIES(in cm):%d",cm);
	printf("\nDISTANCE BETWEEN THE TWO CITIES(in feet):%0.2f",feet);
	printf("\nDISTANCE BETWEEN THE TWO CITIES(in inch):%0.2f",inch);
	getch();
}
