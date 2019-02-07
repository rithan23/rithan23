#include <stdio.h>

int main()
{
    char a[100];
    int i,j,max;
    scanf("%s",a);
    max=a[0];
    for(i=0;a[i]!='\0';i++)
{
for(j=i+1;a[j]!='\0';j++)
{
if(a[i]>a[j])
{
max=a[i];
a[i]=a[j];
a[j]=max;
}
}
}
    printf("%s",a);
    return 0;
    
}
