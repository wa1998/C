#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main ()
{
inicio:
int a,b,c,d,e,f,m;
clrscr();
randomize();
a=random(10);
b=random(20);
c=random(30);
d=random(40);
e=random(50);
f=random(60);
printf("Programa da mega sena\n");
printf("%d %d %d %d %d %d\n",a,b,c,d,e,f);
if(a==0)
{
goto inicio;
}
else
if(b==0)
{
goto inicio;
}
else
if(c==0)
{
goto inicio;
}
else
if(d==0)
{
goto inicio;
}
else
if(e==0)
{
goto inicio;
}
else
if(f==0)
{
goto inicio;
}
else
if(a==b||a==c||a==d||a==e||a==f)
{
goto inicio;
}
else
if(b==a||b==c||b==d||b==e||b==f)
{
goto inicio;
}
else
if(c==a||c==b||c==d||c==e||c==f)
{
goto inicio;
}
else
if(d==a||d==b||d==c||d==e||d==f)
{
goto inicio;
}
else
if(e==a||e==b||e==c||e==d||e==f)
{
goto inicio;
}
else
if(f==a||f==b||f==c||f==d||f==e)
{
goto inicio;
}
printf("Sortear novamente?\n");
printf("Se sim,digite:1; Se nao, digite:2\n");
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