#include <stdio.h>
int main()
{
    int p,a,i,j,per,area,flag=0;
	scanf("%d %d",&p,&a);
	for(i=1;i<=(p/2);i++)
	{
	    for(j=1;j<=(p/2);j++)
	{
	    per=2*(i+j);
	    area=i*j;
	    if(per==p && area==a)
	    {
	        flag=1;
	        break;
	    }
	}
	}
	if(flag==1)
	{
	    printf("yes");
	}
	if(flag==0)
	{
	    printf("no");
	}
	
	return 0;
  
}
