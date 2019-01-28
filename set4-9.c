#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],i,c,x;
clrscr();
printf("\narray elements");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
c=a[0];
for(i=0;i<10;i++)
{
if(a[i]>c)
{
c=a[i];
}
}
printf("\n%d is highest",c);
getch();

}
