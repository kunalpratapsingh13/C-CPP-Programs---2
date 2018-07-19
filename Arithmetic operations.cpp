/*Arithmetic Operations*/
/*Author-Kunal Date-02/07/18*/
#include<stdio.h>
#include<conio.h>
//clrscr();
int main()
{
	int n1,n2,add,sub,prod,quot,remain;
	printf("\n ENTER NUMBER-1:");
	scanf("%d",&n1);
	printf("\n ENTER NUMBER-2:");
	scanf("%d",&n2);
	add=n1+n2;
	sub=n1-n2;
	prod=n1*n2;
	quot=n1/n2;
	remain=n1%n2;
	printf("\n ADDITION OF THE NUMBERS:%d",add);
	printf("\n DIFFERENCE OF THE NUMBERS:%d",sub);
	printf("\n PRODUCT OF THE NUMBERS:%d",prod);
	printf("\n QUOTIENT OF THE NUMBERS:%d",quot);
	printf("\n REMAINDER OF THE NUMBERS:%d",remain);
	getch();
}
