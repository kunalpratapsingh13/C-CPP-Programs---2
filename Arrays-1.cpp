#include<stdio.h>
#include<conio.h>
//clrscr();
int main()
{
	int a[5];
	int i,n=5;
	for(i=0;i<n;i++)
	{
		printf("\nENTER THE NUMBER-%d:",i+1);
		scanf("%d",&a[i]);		
	}
	for(i=0;i<n;i++)
	printf("ARRAY ELEMENT-%d, VALUE=%d, ADDRESS=%u\n",i+1,a[i],&a[i]);
	getch();
}
