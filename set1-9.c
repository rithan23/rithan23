#include<stdio.h>
#include<conio.h>
void main()
{
int n,k,i,sum=0,a[50];
clrscr();
scanf("%d",&n);
scanf("%d",&k);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}

for(i=1;i<=k;i++)
{
sum=sum+i;
}
printf("%d",sum);
getch();
}
