#include <stdio.h>



int main()

{

int num,p=1,num1,s,sum=0;

scanf("%d",&num);

num1=num;

while(num!=0)

{

s=num%10;

sum=(sum*10)+s;

num=num/10;

}num1=sum;

sum=0;

while(num1!=0)

{

s=num1%10;

sum=(sum*10)+s;

num1=num1/10;

printf("%d",s);

}

return 0;

}
