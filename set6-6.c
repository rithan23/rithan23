#include <stdio.h>

int main()

{

char a[100];

int alp=0,num=0;

scanf("%s",a);

int i,m;

for(i=0;a[i]!='\0';i++);

m=i;

for(i=0;i<m;i++)

{

if(('a'<=a[i] && a[i]<='z') || ('A'<=a[i] && a[i]<='Z'))

{

alp=1;

}

if('0'<=a[i] && a[i]<='9')

{

num=1;

}

}

if(num==1 && alp==1)

{

printf("yes");

}

else

printf("no");

return 0;

}

