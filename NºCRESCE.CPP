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
printf("%d %d %d %d",b,d,c,a);
}
else
if(a>d&&d>b&&b>c)
{
printf("%d %d %d %d",c,b,d,a);
}
else
if(a>d&&d>c&&c>b)
{
printf("%d %d %d %d",b,c,d,a);
}
else
if(b>a&&a>c&&c>d)
{
printf("%d %d %d %d",d,c,a,b);
}
else
if(b>a&&a>d&&d>c)
{
printf("%d %d %d %d",c,d,a,b);
}
else
if(b>c&&c>a&&a>d)
{
printf("%d %d %d %d",d,a,c,b);
}
else
if(b>c&&c>d&&d>a)
{
printf("%d %d %d %d",a,d,c,b);
}
else
if(b>d&&d>a&&a>c)
{
printf("%d %d %d %d",c,a,d,b);
}
else
if(b>d&&d>c&&c>a)
{
printf("%d %d %d %d ",a,c,d,b);
}
else
if(c>a&&a>b&&b>d)
{
printf("%d %d %d %d",d,b,a,c);
}
else
if(c>a&&a>d&&d>b)
{
printf("%d %d %d %d",b,d,a,c);
}
else
if(c>b&&b>a&&a>d)
{
printf("%d %d %d %d",d,a,b,c);
}
else
if(c>b&&b>d&&d>a)
{
printf("%d %d %d %d",a,d,b,c);
}
else
if(c>d&&d>a&&a>b)
{
printf("%d %d %d %d",b,a,d,c);
}
else
if(c>d&&d>b&&b>a)
{
printf("%d %d %d %d",a,b,d,c);
}
else
if(d>a&&a>b&&b>c)
{
printf("%d %d %d %d",c,b,a,d);
}
else
if(d>a&&a>c&&c>b)
{
printf("%d %d %d %d",b,c,a,d);
}
else
if(d>b&&b>a&&a>c)
{
printf("%d %d %d %d",c,a,b,d);
}
else
if(d>b&&b>c&&c>a)
{
printf("%d %d %d %d",a,c,b,d);
}
else
if(d>c&&c>a&&a>b)
{
printf("%d %d %d %d",b,a,c,d);
}
else
if(d>c&&c>b&&b>a)
{
printf("%d %d %d %d",a,b,c,d);
}
getch ();
}
