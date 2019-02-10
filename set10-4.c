#include <stdio.h>
int main()
{
    int a[100],i,n,m;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("%d",a[m-1]);
    return 0;
    
}
