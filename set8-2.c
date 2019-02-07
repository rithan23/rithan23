#include <stdio.h>
int main()
{
    char a[10],i,j,b[10],count,c=0;
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++);
    count=i;
    j=0;
    for(i=0;i<count;i++)
    {
        if((a[i]=='a')||(a[i]=='e')||(a[i]=='i')||(a[i]=='o')||(a[i]=='u')||(a[i]=='A')||(a[i]=='E')||(a[i]=='I')||(a[i]=='O')||(a[i]=='U'))
        {
            c++;
        }
    }
    if(c!=0)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
    
}
