#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
printf("enter a year");
scanf("%d",&a);
if((a%4==0)&&(a%400==0)&&(a%100!=0))
{
printf("yes");
}
else
{
printf("no");
}
getch();
}
