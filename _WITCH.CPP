#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<dos.h>
void main ()
{
inicio:
int a,x;
clrscr ();
printf("switch\n");
scanf("%d",&a);
switch(a)
{
case 1:
printf("dois");
break;
case 2:
printf("quatro");
break;
case 3:
printf("wesley");
break;
case 4:
printf("sala");
break;
}
printf("\n digitar novamente?\n");
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
