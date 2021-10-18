#include<stdio.h>
#include<conio.h>
#include<math.h>
void main ()
{
inicio:
float a,b,c;
int m;
clrscr ();22ntf("programa de adi‡ao\n");
printf("digite dois valores\n");
scanf("%f %f",&a, &b,&c);
c=(a+b);
printf("c=%.2f\n",c);
printf("Deseja calcular novamente?\n");
printf("Se deseja, digite:1;Se deseja sair digite:2\n");
scanf("%d",&m);
if(m==1)
{
goto inicio;
}
else
if(m==2)
{
goto fim;
}
getch ();
fim:
}
