#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<dos.h>
void main ()
{
inicio:
int x;
char a;
clrscr ();
printf("asc\n");
for(a=0;a<=255;a++)
{
printf("%d=%c\n",a,a);
delay(500);
}
printf("\ndeseja iniciar novamente?\n");
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