#include <stdio.h>

int main()
{
    char a[100];
    int n,i,c;
    scanf("%s",a);
    scanf("%d",&n);
    for(i=0;a[i]!='\0';i++);
    c=i-n;
    for(i=c;a[i]!='\0';i++)
    {
        printf("%c",a[i]);
    }
    return 0;
}
