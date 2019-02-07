#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d,x,gcd,lcm;
clrscr();
printf("enter two value:");
scanf("%d%d",&a,&b);
c=a;
d=b;
while(b!=0)
{
x=b;
b=a%b;
a=x;
}
gcd=a;
lcm=(c*d)/gcd;
printf("\nlcm is %d",lcm);
getch();

}
