#include<stdio.h>
#include<conio.h>
void main()
{
  int n,orgnum,revnum,rem;
  clrscr();
  scanf("%d",&n);
  orgnum=n;
  while(n!=0)
  {
      rem=n%10;
      revnum=revnum*10+rem;
      n=n/10;
  }
  if(revnum==orgnum)
  {
      printf("yes");
  }
  else
  {
      printf("no");
  }
  getch();
}
