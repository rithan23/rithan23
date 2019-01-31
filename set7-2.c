#include <stdio.h>

#include<string.h>

int main()

{

char num[100];

int flag=0,i,count;

scanf("%s",num);

count=strlen(num);

for(i=0;i<count;i++)

{

if(num[i]=='0' || num[i]=='1')

{

flag=1;

}

else

{

flag=0;

break;

}

}

if(flag==1)

{

printf("yes");

}

else

{

printf("no");

}

return 0;

}
