#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<dos.h>
void main ()
{
inicio:
int x;
char c='a';
clrscr ();
printf("while A a Z\n");
while(c<='z')
{
printf(" %c ",c);
delay(500);
c++;
}
printf("\n deseja ver novamente?\n");
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
