#include<stdio.h>
#include<conio.h>
//clrscr();
int main()
{
	int year;
	printf("\nENTER THE YEAR:");
	scanf("%d",&year);
	if (year%4==0)
	{
		printf("\nTHE YEAR IS A LEAP YEAR");
	}
	else
	printf("\nTHE YEAR IS NOT A LEAP YEAR");
	getch();
}
