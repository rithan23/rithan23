#include <stdio.h>
int main()
{
    int num1,num2,i,sum,j,flag=0;
    scanf("%d%d",&num1,&num2);
    sum=num1*num2;
    for(i=1;i<=sum;i++)
    {
        j=i*i;
        if(j==sum)
        {
            flag=1;
            break;
        }}
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
