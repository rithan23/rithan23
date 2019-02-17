#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],n,i,j,k,c,z,max,pos,o[100],m=0;
clrscr();
printf("no of value and k value");
scanf("%d%d",&n,&k);
 for(i=0;i<n;i++)
{
scanf("%d",&o[i]);
}
for(i=0;i<n;i++)
{
    if(o[i]%2!=0)
    {
        a[m]=o[i];
        m++;
    }
}
max=a[0];
for(i=0;i<n;i++)
{
if(a[i]>max)
{
max=a[i];
}
}
printf("hai%d\n",max);
 c=max;
for(i=0;i<k;i++)
{
for(j=0;j<n;j++)
  {
  if(a[j]<c)
  {
  c=a[j];
  pos=j;
  z=j;
  }
  }
  a[pos]=a[pos]+max;
  c=a[pos];
  }
 printf("min is %d",a[z]-max);
 getch();
 
}
