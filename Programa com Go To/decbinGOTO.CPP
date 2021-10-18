#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
inicio:
int a,b,c,d,e,f,g,l,m;
clrscr();
printf("conversao decimal para binario\n");
printf("digite o valor de 0 a 15,\n");
scanf("%d",&a);
c=a%2;
b=a/2;
d=b%2;
g=b/2;
e=g%2;
f=g/2;
printf("fedc=%d%d%d%d\n",f,e,d,c);
printf("Deseja calcular novamente?\n");
printf("Se sim, digite:1; Se nao, digite:2 \n");
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
getch();
fim:
}