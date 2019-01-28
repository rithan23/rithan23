#include<stdio.h>
int main()
{
int i,j=0,b,k=0;
char a[0];
scanf("%s",a);
for(i=0;a[i]!='\0';i++)
b=i;
for(i=0;i<=b;i++)
{
if((a[i]>=48)&&(a[i]<=57))
{
j++;
}
else
{
k++;
}
}
printf("%d",j);
return 0;
}
