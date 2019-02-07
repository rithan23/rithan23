#include <stdio.h>
int main()
{
    long int num;
    int rem,i=0,j,a[100];
    scanf("%ld",&num);
    while(num!=0)
    {
        rem=num%10;
        if(!(rem%2==0))
        {
            a[i]=rem;
            i++;
        }
        num=num/10;
    }
    for(j=i-1;j>=0;j--)
    {
        printf("%d",a[j]);
    }
    return 0;
    
}
