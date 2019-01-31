#include<stdio.h>

#include<conio.h>

void main()

{

int a,i,flag=0;

clrscr();

printf("enter the values");

scanf("%d",&a);

for(i=2;i<a/2;i++)

{

if(a%i==0)

{

flag=1;

}

}

if(flag==0)

{

printf("prime number");

}

else

{

printf("not a prime number");

}

getch();

}
