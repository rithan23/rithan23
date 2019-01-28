#include <stdio.h>

int main()
{
   int n,flag=0;
   scanf("%d",&n);

   while(n!=0)
   {
       if((n%2)!=0)
       {
           flag=1;
           break;
       }
      n=n/2; 
   }

if(flag==0)
{
    printf("yes");
}
else
{
    printf("no");
}
    return 0;
    
}
