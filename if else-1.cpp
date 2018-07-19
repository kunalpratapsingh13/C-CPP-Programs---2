#include<stdio.h>
#include<conio.h>
//clrscr();
int main()
{
	int a;
	printf("\nENTER A NUMBER:");
	scanf("%d",&a);
	if (a%2==0)
	{
	printf("\nTHE NUMBER IS AN EVEN NUMBER");
	}
	else
	printf("\nTHE NUMBER IS AN ODD NUMBER");
	getch();
}
