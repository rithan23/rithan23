#include<stdio.h>
#include<conio.h>
void main()
{
    int sum=0,n,i,rem=0;
    clrscr();
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        sum=sum*10+rem;
        n=n/10;
    }
    printf("%d",sum);
    getch();
}
