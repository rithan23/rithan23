#include <stdio.h>



int main()

{

int num,rem,i;

scanf("%d",&num);

rem=num%10;

num=num-rem;num=num+10;

printf("%d",num);

return 0;

}
