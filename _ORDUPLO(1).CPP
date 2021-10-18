#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<dos.h>
void main ()
{
inicio:
int a,x;
clrscr ();
printf("contagem de 0 a 100\n");
for(a=0;a<=10000;a++)
{
printf(". . . . . .%d. . . . . . ",a);
delay(25);
}
printf("deseja contar novamente?\n");
printf("1-sim. 2-nao\n");
scanf("%d",&x);
if(x==1)
{
goto inicio;
}
else
if(x==2)
{
goto fim;
}
getch ();
fim:
}