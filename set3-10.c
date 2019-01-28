#include <stdio.h>

int main()
{
    int min,hr,hr1,min1;
    scanf("%d%d%d%d",&min,&hr,&min1,&hr1);
    if(hr>hr1)
    {
         hr=hr-hr1;
    }
    else
    {
        hr=hr1-hr;
    }
    if(min>min1)
    {
         min=min-min1;
    }
    else
    {
        min=min1-min;
    }
    printf("%d %d",hr,min);
    return 0;
    
}
