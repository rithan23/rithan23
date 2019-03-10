#include<stdio.h>
#include<math.h>
void main()
{
    int n,a[100],i,j,t;
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    t=a[0];
    for(i=0;i<n-1;i++)
    {
        {
            t=(t&a[i+1]);
        }
    }
    printf("%d",t);
}
