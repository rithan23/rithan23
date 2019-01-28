#include<stdio.h>
#include<conio.h>
void main()
{
int i,max,n,num[50];
clrscr();
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&num[i]);
}
max=num[0];
for(i=0;i<n;i++)
{
if(max<num[i])
{
max=num[i];
}
}
printf("%d",max);
getch();
}
