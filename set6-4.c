#include <stdio.h>



int main()

{

int num,i;

scanf("%d",&num);

for(i=num;i!=0;i--)

{

if(i%2==0)

{

printf("%d",i);

break;

}

}

return 0;

}
