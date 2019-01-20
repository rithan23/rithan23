#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int num,temp,rem,sum=0,n=0;
    scanf("%d",&num);
    temp=num;
    while(temp!=0)
    {
        temp=temp/10;
        ++n;
    }
    temp=num;
    while(temp!=0)
    {
        rem=temp%10;
        sum=sum+pow(rem,n);
        temp=temp/10;
    }
    if(sum==num)
    {
        printf("yes");
        
    }
    else
    {
        printf("no");
    }
    getch();
}
