#include<stdio.h>
#include<conio.h>
//clrscr();
int main()
{
	int num,i,j,k,s=40;
	printf("\nENTER THE NUMBER OF LINES:");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		for(j=1;j<=s;j++)
		printf(" ");
		for(k=1;k<=i;k++)
		printf("%d",k);
		for(k=i-1;k>0;k--)
		printf("%d",k);
		printf("\n");
		s--;		
	}
	getch();
}
