#include<stdio.h>
#include<conio.h>
//clrscr();
int main()
{
	int qty,rate;
	float disc=0.0,net;
	printf("\n ENTER QUANTITY PURCHASED:");
	scanf("%d",&qty);
	printf("\n ENTER RATE:");
	scanf("%d",&rate);
	if (qty>100);
	{
		disc=(qty*rate)*10/100;
		net=(qty*rate)-disc;
	}
	printf("\n NET AMOUNT:%0.2f \n",net);
	getch ();
}
