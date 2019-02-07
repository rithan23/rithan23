#include <stdio.h>
int main()
{
    int n,l,m,i,j=0;
    scanf("%d%d%d",&n,&l,&m);
    for(i=l;i<=m;i++)
    {
        if(i==n)
        {
            j=1;
            break;
        }
    }
    if(j==1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
    
}
