#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int a,b,c,d;
clrscr();
printf("programa de n£meros crescentes\n");
printf("digite quatro n£meros\n");
scanf("%d%d%d%d",&a,&b,&c,&d);
if(a>b&&b>c&&c>d)
{
printf("%d %d %d %d",d,c,b,a);
}
else
if(a>b&&b>d&&d>c)
{
printf("%d %d %d %d",c,d,b,a);
}
else
if(a>c&&c>b&&b>d)
{
printf("%d %d %d %d",d,b,c,a);
}
else
if(a>c&&c>d&&d>b)
{