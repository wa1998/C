#include<stdio.h>
#include<conio.h>
#include<math.h>
void main ()
{
int w;
float m,s,d,hrs,min,seg,i;
inicio:
clrscr ();
printf("conversao de idade\n");
printf("digite os valor da idade\n");
scanf("%f",&i);
m=(i*12);
s=(m*4);
d=(s*7);
hrs=(d*24);
min=(hrs*60);
seg=(min*60);
printf("m=%.0f s=%.0f d=%.0f hrs=%.0f min=%.0f seg=%.0f \n",m,s,d,hrs,min,seg);
printf("Calcular novamente?\n");
printf("se sim, digite:1, se nao, digite:2\n");
scanf("%d",&w);
if(w==1)
{
goto inicio;
}
else
if(w==2)
{
goto fim;
}
getch();
fim:
}

