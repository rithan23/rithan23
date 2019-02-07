#include <stdio.h>

int main()
{
    char a[10],i,j,b[10],count,c=0;
    scanf("%s",a);
    
    for(i=0;a[i]!='\0';i++);
    count=i;
    j=0;
    for(i=count-1;i>=0;i--)
    {
        b[j]=a[i];
        j++;
    }
    for(i=0;i<count;i++)
    {
        if(b[i]==a[i])
        {
            c++;
        }
    }
    if(count==c)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}
