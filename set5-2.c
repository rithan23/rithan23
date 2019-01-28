#include <stdio.h>

int main()
{
    int i,j;
   char a[100],b[100];
   scanf("%s",a);
   scanf("%s",b);
   for(i=0;a[i]!='\0';i++);
   for(j=0;b[j]!='\0';j++);
   if(i==j)
   {
       printf("%s",a);
   }
   else
   {
       if(i<j)
       printf("%s",b);
       else
       printf("%s",a);
   }

    return 0;
    
}
