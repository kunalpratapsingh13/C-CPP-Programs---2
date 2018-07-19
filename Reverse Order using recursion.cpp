/*Reverse order using recursive function*/
#include<stdio.h>
#include<conio.h>
//clrscr();
int reverse (unsigned long);
int main()
{
	unsigned long num;
	printf("\nENTER A NUMBER:");
	scanf("%lu",&num);
	printf("\nREVERSE OF %lu IS:",num);
	reverse(num);
	getch();
}
int reverse (unsigned long n)
{
	int dig;
	if(n==0)
	return 1;
	else
	{
		dig=n%10;
		n=n/10;
		printf("%d",dig);
		reverse(n);
	}
}
