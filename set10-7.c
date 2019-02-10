#include <stdio.h>
int main()
{
    int a,i,b=0,rem,pos=1;
	scanf("%d",&a);
	while(a!=0)
	{
	    rem=a%10;
	    b=b*pos+rem;
	    pos=pos*10;
	    a=a/10;
	}
	printf("%d",b);
	return 0;
  
}
