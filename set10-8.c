#include <stdio.h>
int main()
{
    int a[10],i,n,j=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(j!=a[i])
        {
            printf("%d",i);
            break;
        }
        j++;
    }
    return 0;
    
}
