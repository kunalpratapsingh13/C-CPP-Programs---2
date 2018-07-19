#include<stdio.h>
#include<conio.h>
//clrscr();
int main()
{
	char c;
	printf("\nENTER AN ALPHABET:");
	scanf("%c",&c);
	if (c=='e'||c=='a'||c=='i'||c=='o'||c=='u')
	{
	printf("\nALPHABET IS A LOWER CASE VOWEL");
	}
	else
	{
	if (c=='A'||c=='E'||c=='I'||c=='O'||c=='U')			
		printf("\nAPLHABET IS AN UPPER CASE VOWEL");
	else
		printf("\nALHPABET IS A CONSONANT");
	}
	getch();
}
