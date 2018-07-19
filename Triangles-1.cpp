#include<stdio.h>
#include<conio.h>
//clrscr();
int main()
{
	int num,i,j;
	printf("\nENTER THE NUMBER OF LINES:");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("1");
		}
		printf("\n");
	}
	getch();
}
