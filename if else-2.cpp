#include<stdio.h>
#include<conio.h>
//clrscr();
int main()
{
	char ms,sex;
	int age;
	printf("ENTER MARITAL STATUS[M/U]:");
	scanf("%c",&ms);
	printf("\nENTER AGE:");
	scanf("%d",&age);
	printf("\nENTER SEX[M/F]:");
	scanf("%c",&sex);
	if ((ms=='M')||(ms=='U'&&age>30&&sex=='M')||(ms=='U'&&age>25&&sex=='F'))
	printf("\nTHE PERSON IS INSURED");
	else
	printf("\nTHE PERSON IS NOT INSURED");
	getch();
}
