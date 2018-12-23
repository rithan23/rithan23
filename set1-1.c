#include<stdio.h>
#include<conio.h>
void main()
{
int n;
clrscr();
printf("enter a number");
scanf("%d",&n);
if(n>0)
{
printf("it is positive");
}
if(n<0)
{
printf("it is negative");
}
if(n==0)
{
printf("it is zero");
}
getch();
}
