#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main ()
{
int a,b,c,d,e,f,g,h,i,m,n,w;
clrscr();
randomize();
a=random(10);
b=random(10);
c=a+b;
d=random(10);
e=random(10);
g=d+e;
printf("Programa 21\n");
printf("vc=%d+%d=%d\n",a,b,c);
printf("pc=x+x=x\n");
printf("sortear mais um n�?\n");
printf("1-sim, 2-nao\n");
scanf("%d",&f);
if(f==1)
{
goto randomize;
}
else
if(f==2)
{
goto resultado1;
}
resultado1:
g=e+d;
c=a+b;
printf("vc=%d+%d=%d\n",a,b,c);
printf("pc=%d+%d=%d\n",d,e,g);
scanf("%d %d",g,c);
if(c<=21)
{
printf("vc ganhou!");
}
if(g<=21)
{
printf("pc ganhou!");
}
randomize:
randomize();
h=random(10);
i=random(10);
printf("vc=%d+%d=%d\n",c,h,m);
printf("pc=x+y=xy\n");
printf("sortear mais um n�\n");
printf("1-sim, 2-nao");
scanf("%d",&w);
if(w==2)
{
goto resultado;
}
resultado:
m=c+h;
n=g+i;
printf("vc=%d+%d=%d\n",c,h,m);
printf("pc=%d+%d=%d\n",g,i,n);
getch();
}
    //ro:%d e o 4� numero do computador:%d\n",w,l);
fim:
printf("resposta\n");
r=d+e+f+l;
o=a+b+c+h+w;
printf("soma do computador%d soma do participante%d\n",r,o);
getch();

}
