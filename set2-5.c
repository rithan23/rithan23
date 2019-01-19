#include<stdio.h>
#include<conio.h>
void main()
{
    int n,m,i;
    printf("enter n and m");
    scanf("%d%d",&n,&m);
    for(i=n;i<=m;i++)
    {
        if(i%2==0)
        {
            printf("%d",i);
        }
    }
    getch();
    
}
