#include <stdio.h>

int main()
{
    int i,sum=0;
    int tem[7];
    for(i=0;i<7;i++)
    {
        scanf("%d",&tem[i]);
        if(tem[i]>tem[i-1])
            sum++;
    }
    printf("Dulaarsan:%d",sum);
}