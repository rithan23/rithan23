#include<stdio.h>
#include<conio.h>
void main()
{
int i,min,n,num[50];
clrscr();
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&num[i]);
}
min=num[0];
for(i=0;i<n;i++)
{
if(min>num[i])
{
min=num[i];
}
}
printf("%d",min);
getch();

}
