#include <stdio.h>
int main()
{
   char a[100],i,j,n;
   scanf("%s",a);
   for(i=0;a[i]!='\0';i++);
   j=i/2;
   a[j]='*';
   printf("%s",a);
    return 0;
    
}
