#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
float a,b,c,x1,x2,d;
clrscr ();
printf("programa de bascara\n");
printf("digite os valores de abc\n");
scanf("%f %f %f",&a,&b,&c);
y=(b*b)-(4*a*c);
if(d>0)
{
x1=(-b+sqrt(d))/(2*a);
x2=(-b-sqrt(d))/(2*a);
printf("delta=%.2f\n",d);
printf("x1=%.2f e x2=%.2f\n",x1,x2);
}
else
if(d<0)
{
printf("nao existe raiz de numero negativo");
}
getch();
}
