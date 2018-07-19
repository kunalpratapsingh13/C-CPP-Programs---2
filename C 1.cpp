#include<stdio.h>
#include<conio.h>
int main()
{
	int i;
	printf("\nENTER A NUMBER:");
	scanf("%d",&i);
	switch(i)
	{
		case 1:
			printf("\nNUMBER IS ONE");
			break;
			case 2:
				printf("NUMBER IS TWO");
				break;
				case 3:
					printf("\nNUMBER IS THREE");
					break;
					default:
						printf("\nNUMBER IS OTHER THAN ONE,TWO AND THREE");
	}
	getch();
}
