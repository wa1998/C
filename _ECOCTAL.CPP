#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int a,b,c,d,e,f,g,l;
clrscr();
printf("conversao decimal para binario");
printf("digite o valor de 0 a 15,\n");
scanf("%d",&a);
c=a%8;
b=a/8;
d=b%8;
g=b/8;
e=g%8;
f=g/8;
printf("%d%d%d%d\n",f,e,d,c);
getch();
}