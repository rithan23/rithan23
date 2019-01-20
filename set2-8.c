#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int a,b,temp1,temp2,rem,sum=0,n=0,i;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
    temp1=i;
    temp2=i;
    while(temp1!=0)
    {
        temp1=temp1/10;
        ++n;
    }
    while(temp2!=0)
    {
        rem=temp2%10;
        sum=sum+pow(rem,n);
        temp2=temp2/10;
    }
    if(sum==i)
    {
        printf("%d  ",i);
    }
    n=0;
    sum=0;
    }
    getch();
}
