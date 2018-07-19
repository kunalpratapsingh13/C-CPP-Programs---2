/*Challenge by Karan*/
#include<stdio.h>
#include<conio.h>
//clrscr();
int main()
{
	int kunal,karan,num;
	printf("\nENTER VALUE-1:");
	scanf("%d",&kunal);
	printf("\nENTER VALUE-2:");
	scanf("%d",&karan);
	printf("\nVALUES BEFORE SWAPPING, KUNAL:%d AND KARAN:%d",kunal,karan);
	num=kunal;
	kunal=karan;
	karan=num;
	printf("\nVALUE AFTER SWAPPING, KUNAL:%d AND KARAN:%d",kunal,karan);
	getch();
}
