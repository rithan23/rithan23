#include <stdio.h>

int main()
{
    int l,b,h,v,a;
    scanf("%d%d%d",&l,&b,&h);
    v=(2*l*b)+(2*b*h)+(2*h*l);
    a=(l*b*h);
    printf("%d %d",v,a);
    return 0;
    
}
