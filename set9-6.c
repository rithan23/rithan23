#include <stdio.h>

int main(void) {
	char a[10];
	int i,check=0,j;
	scanf("%s",a);
	for(i=0;a[i]!='\0';i++)
	{
		for(j=i+1;a[j]!=0;j++)
		{
			if(a[i]==a[j])
			{
				printf("no");
				check=1;
				break;
			}
		}
		if(check==1)
		break;
	}

if(check==0)
{
	printf("yes");
}
	return 0;
  
}
