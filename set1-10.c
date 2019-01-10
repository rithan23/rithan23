#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,c=0;
    clrscr();
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    n=n/10;
    c++;
    }
    printf("%d",c);
    getch();
}
