/*Recursive funtion for exponent*/
#include<stdio.h>
#include<conio.h>
power (int,int);
int main()
{
	int x,y,pow;
	printf("\nENTER A NUMBER FOR x:");
	scanf("%d",&x);
	printf("\nENTER A NUMBER FOR y:");
	scanf("%d",&y);
	pow=power(x,y);
	printf("\nx TO THE POWER y IS:%d",pow);
	getch();
}
power (int a,int b)
{
	int prod;
	if(b==0)
	return 1;
	{
	else
	prod=a*pwer(a,b-1);
	return(prod)
	  }
}
