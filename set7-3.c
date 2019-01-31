#include<stdio.h>

#include<conio.h>

void main()

{

int a[10],i,c=0,n;

clrscr();

scanf("%d",&n);

for(i=0;i<n;i++)

{

scanf("%d",&a[i]);

}

c=a[0];

for(i=0;i<n;i++)

{

if(a[i]<c)

{

c=a[i];

}

}

printf("%d",c);

getch();

}
