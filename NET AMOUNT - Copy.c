#include<stdio.h>
#include<conio.h>
//clrscr();
int main()
{
	int qty,rate;
	float disc,net;
	printf("\n ENTER THE QUANTITY PURCHASED:");
	scanf("%d",&qty);
	printf("\n ENTER RATE:");
	scanf("%d",&rate);
	if (qty>100)
	{
		disc=rate*qty*10/100;
	}
	net=(rate*qty)-disc;
	printf("\n NET AMOUNT IS:%0.2f",net);
	getch();
}
