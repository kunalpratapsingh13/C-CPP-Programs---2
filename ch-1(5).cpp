#include<stdio.h>
#include<conio.h>
//clrscr();
int main()
{
	int l,b,rad,ar,pr;
	float pi=3.14,ac,cc;
	printf("\nENTER THE LENGTH OF RECTANGLE:");
	scanf("%d",&l);
	printf("\nENTER THE BREADTH OF RECTANGLE:");
	scanf("%d",&b);
	printf("\nENTER RADIUS OF CIRCLE:");
	scanf("%d",&rad);
	ar=l*b;
	pr=2*(l+b);
	ac=pi*rad*rad;
	cc=4*pi*rad;
	printf("\nAREA OF THE RECTANGLE:%d",ar);
	printf("\nPERIMETER OF THE RECTANGLE:%d",pr);
	printf("\nAREA OF CIRCLE:%0.3f",ac);
	printf("\nCIRCUMFERENCE OF CIRCLE:%0.3f",cc);		
	getch();
}
