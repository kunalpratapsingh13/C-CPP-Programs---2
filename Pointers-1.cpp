/*Program to givve examples and(address of) and * (Value At Address)*/
#include<stdio.h>
#include<conio.h>
//clrscr


int i=3,*j;
j=&i;
printf("\nVALUE OF i is [i]:%d",i);
printf("\nVALUE OF i is [*(&i)]:%d",*(&i));
printf("\nADDRESS OF i is [&i]:%u",&i);
printf("\nVALUE OF i is [*(&j)]:%u",*(&j));
printf("\nADDRESS OF i is [i]:%u",&j);
printf("\nADDRESS OF i is [i]:%u",j);
getch();
}

