#include<stdio.h>
#include<conio.h>
//clrscr():
int main()
{
	char ch;
	printf("\nENTER AN ALPHABET:");
	scanf("%c",&ch);
	switch (ch)
	{
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
	printf("\nTHE ALPHABET IS A LOWER CASE VOWEL");
	break;
	case 'A':
	case 'E':
	case 'I':
	case 'O':
	case 'U':
	printf("\nTHE ALPHABET IS AN UPPER CASE VOWEL");
	break;
	 default:
	printf("\nTHE ALPHABET IS A CONSONANT");
	}
	getch();
}
