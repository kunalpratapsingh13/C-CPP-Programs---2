#include<stdio.h>
#include<conio.h>
//clrscr();
int main()
{
	int sp,profit;
	float cp;
	printf("\nENTER THE TOTAL SELLING PRICE:");
	scanf("%d",&sp);
	printf("\nENTER THE TOTAL PROFIT:");
	scanf("%d",&profit);
	cp=(sp-profit)/15;
	printf("\nTHE COST PRICE OF ONE ITEM IS:%0.3f",cp);		
	getch();
}
