#include <stdio.h>

int main()
{
    int i,j,n,k=0;
   char a[100],b[100],c[200];
   scanf("%s",a);
   scanf("%s",b);
   for(i=0;a[i]!='\0';i++);
   for(j=0;b[j]!='\0';j++);
   n=i+j;
   for(j=i;j<n;j++)
   {
       a[j]=b[k];
       k++;
   }
    puts(a);
    return 0;
    
}
