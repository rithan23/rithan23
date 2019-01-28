#include<stdio.h>
int main()
{
  int a[10],i,sum=0,n;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
   scanf("%d",&a[i]);
   sum=sum+a[i];
  }
  sum=sum/n;
  printf("%d",sum);
  return 0;
  
}
