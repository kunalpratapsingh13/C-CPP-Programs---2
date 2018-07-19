/* RECURSION FOR SWAPPING TWO VARIABLES*/
#include<stdio.h>
#include<conio.h>
void swap(int *,int *);
int main()
{
	int a=10,b=20;
	printf("\nVALUES OF a AND b BEFORE SWAPPING ARE %d AND %d",a,b);
	swap(&a,&b);
	printf("\nVALUES OF a AND b AFTER SWAPPING ARE %d AND %d",a,b);
	getch();
}
void swap(x,y)
int *x,*y;
{
	int t;
	*t=x;
	*x=y;
	*y=t;
}
