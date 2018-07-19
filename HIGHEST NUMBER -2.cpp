#include<stdio.h>
#include<conio.h>
//clrscr();
int main()
{
	int a,b,c;
	printf("\nENTER THE THREE NUMBERS:");
	scanf("%d%d%d",&a,&b,&c);
	if (a>b && a>c)
	{
		printf("\nHIGHEST NUMBER IS:%d",a);
	}
	if (b>a && b>c)
	{
		printf("\nHIGHEST NUMBER IS:%d",b);
	}
	if (c>a && c>b)
	{
		printf("\nHIGHEST NUMBER IS:%d",c);
	}
	getch();
}
