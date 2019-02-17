#include <stdio.h>
int main()
{
    int a,i;
    scanf("%d",&a);
    while(a%2==0)
    {
        a=a/2;
    }
    printf("%d",a);
   return 0;
   
}
