#include<stdio.h>
#include<conio.h>
//clrscr();
int main()
{
	int a[5],i,j=5,k,val,pos;
	for (i=0;i<5;i++)
	{
		printf("\nENTER NUMBER-%d:",i+1);
		scanf("%d",&a[i]);
	}
	printf("\nENTER VALUE TO INSERT:");
	scanf("%d",&val);
	printf("\nENTER POSITION TO INSERT:");
	scanf("%d",&pos);
	j++;
	for (k=j;k>=pos;k--)
	{
		a[k]=a[k-1];
	}
	a[--pos]=val;
	printf("\nTHE ARRAY IS:");
	for (i=0;i<j;i+1)
	{
		printf("\n %d",a[i]);
	}
	getch();
}
