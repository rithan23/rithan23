#include <stdio.h>
int main()
{
    
	int a,d,n,s=0,i;
	scanf("%d %d %d",&a,&d,&n);
	for(i=1;i<n;i++)
	{
	s=s+(a+(i*d));
	}
	printf("%d",s+a);
	return 0;
}
