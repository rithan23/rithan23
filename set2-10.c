#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,mul;
    clrscr();
    scanf("%d",&n);
    for(i=1;i<=5;i++)
    {
        mul=i*n;
        printf("%d ",mul);
    }
    getch();
}
