#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int i,l;
    gets(a);
    l=strlen(a);
    for(i=0;i<l;i++)
    {
        if(a[i]>='a' && a[i]<='z')
        {
            a[i]=a[i]-32;
        }
        else if(a[i]>='A' && a[i]<='Z')
        {
            a[i]=a[i]+32;
        }
    }
    puts(a);
    return 0;
    
}
