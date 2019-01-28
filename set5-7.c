#include<stdio.h>
int main()
{
  int a[10],i,c,n,d;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
   scanf("%d",&a[i]);
  }
  c=0;
  for(i=0;i<n;i++)
  {
  if(a[i]>c)
  {
  c=a[i];
  }
  }d=c;
  for(i=0;i<n;i++)
  {
  if(a[i]<d)
  {
  d=a[i];
  }
  }
  printf("%d %d",c,d);
  return 0;
  
}
