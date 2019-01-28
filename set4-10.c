#include<stdio.h>
#include<conio.h>
void main()
{
int i,a,x=0,y=1,fib=1;
clrscr();
printf("enter the values");
scanf("%d",&a);
for(i=1;i<=a;i++)
{
 printf("\n%d",fib);
 fib=x+y;
 x=y;
 y=fib;
}
getch();

}
