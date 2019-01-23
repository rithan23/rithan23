#include<stdio.h>
#include<conio.h>
void main()
{
    int i,k=0;
    char a[50],b[50];
    clrscr();
    scanf("%[^\n]s",a);
    for(i=0;a[i]!='\0';i++)
    {
        b[k]=a[i];
        k++;
    }
    for(i=k;k>=0;k--)
    {
       printf("%c",b[k]); 
    }
    getch();
}
