#include <stdio.h>

int main() 
{
    int n,c=1,x,max;
    printf("n: ");
    scanf("%d",&n);

    while(c<n)
    {
        scanf("%d",&x);
        if(x>max)
            max=x;
        c++;
    }
    printf("max: %d",max);
    return 0;
}