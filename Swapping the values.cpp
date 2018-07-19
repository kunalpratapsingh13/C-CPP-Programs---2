#include<stdio.h>
#include<conio.h>
//clrscr();
int main()
{
	int a,b;
	printf("\nENTER THE TWO NUMBERS FOR a AND b:");
	scanf("%d%d",&a,&b);
	printf("\nBEFORE SWAPPING,THE VALUES OF a=%d AND b=%d",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\nAFTER SWAPPING,THE VALUES OF a=%d AND b=%d",a,b);
	getch();
}
