#include<stdio.h>
#include<conio.h>
void main ()
{
int a;
clrscr ();
printf("programa impar par;\n");
printf("digite um numero:\n");
scanf("%d",&a);
if(a%2)
{
printf("impar");
}
else
if(a/2)
{
printf("par");
}
getch();
}
