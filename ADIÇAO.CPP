#include<stdio.h>
#include<conio.h>
#include<math.h>
void main ()
{
float m,s,d,hrs,min,x,i;
clrscr ();
printf("conversao de idade\n");
printf("digite os valor da idade\n");
scanf("%f",&i);
m=(i*12);
s=(m*4);
d=(s*7);
hrs=(d*24);
min=(hrs*60);
x=(min*60);
printf("m=%.2f s=%.2s d=%.2f hrs=%.2f min=%.2f x=%.2f \n",i);
getch ();
}

