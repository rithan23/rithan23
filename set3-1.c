#include <stdio.h>
int main()
{
	int a,n,d,sn;
	scanf("%d%d%d",&n,&a,&d);
	sn=(n*(2*a+(n-1)*d))/2;
	printf("sum is %d",sn);
	return 0;
}
