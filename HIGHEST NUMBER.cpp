#include<stdio.h>
#include<conio.h>
//clrscr();
int main()
{
	int a,b,c,h;
	printf("\n ENTER THE THREE NUMBERS:");
	scanf("%d%d%d",&a,&b,&c);
	h=a;
	if (b>h){
		h=b;
	}
	if (c>h){
		h=c;
	}
	printf("\n HIGHEST NUMBER IS:%d",h);
	getch();
}
