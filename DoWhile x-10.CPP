#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<dos.h>
void main ()
{
inicio:
int a,x;
clrscr ();
printf("while x a 10\n");
scanf("%d",&a);
do
{
printf(" %d ",a);
delay(1000);
a++;
}
while(a<=10);
printf("\n deseja contar novamente?\n");
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
