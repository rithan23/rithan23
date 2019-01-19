#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int n,k,ans;
    clrscr();
    printf("enter n and k\n");
    scanf("%d%d",&n,&k);
    ans=pow(n,k);
    printf("%d",ans);
    getch();
}
