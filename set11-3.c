#include<stdio.h>
#include<conio.h>
int main()
{
   char a[50];
   int i;
   scanf("%[^\t\n]s",a);
   
       a[0]=a[0]-32;
   for(i=0;a[i]!='\0';i++)
   {
       if(a[i]==' ')
       {
           i++;
           if(a[i]>='a'&&a[i]<='z')
           {
               a[i]=a[i]-32;
               continue;
           }
       }
   }
printf("%s",a);
    return 0;
}
