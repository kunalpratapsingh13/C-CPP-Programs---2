#include<stdio.h>
#include<conio.h>
//clrscr();
int main()
{
	int m1,m2,m3,m4,m5;
	float percentage;
	printf("\nMARKS OBTAINED IN SUBJECT-1:");
	scanf("%d",&m1);
	printf("\nMARKS OBTAINED IN SUBJECT-2:");
	scanf("%d",&m2);
	printf("\nMARKS OBTAINED IN SUBJECT-3:");
	scanf("%d",&m3);
	printf("\nMARKS OBTAINED IN SUBJECT-4:");
	scanf("%d",&m4);
	printf("\nMARKS OBTAINED IN SUBJECT-5:");
	scanf("%d",&m5);
	percentage=(m1+m2+m3+m4+m5)*100/500;
	printf("\nPERCENTAGE MARKS OBTAINED BY THE STUDENT IS:%0.2f",percentage);	
	getch();
}
