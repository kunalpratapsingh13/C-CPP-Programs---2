#include<stdio.h>
#include<conio.h>
//clrscr();
int main()
{
	int a,b,c;
	printf("\nENTER THE TWO NUMBERS FOR a AND b:\n");
	scanf("%d%d",&a,&b);
	printf("\nBEFORE SWAPPING, THE VALUE OF a=%d AND b=%d",a,b);
	c=a;
	a=b;
	b=c;
	printf("\nAFTER SWAPPING, THE VALUE OF a=%d AND b=%d",a,b);
	getch();
}
