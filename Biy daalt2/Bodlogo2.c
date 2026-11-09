#include <stdio.h>

int main()
{
    int i=1, n;
    scanf("%d",&n);
    for(i<n;i<=10;i++)
    {
        printf("%d*%d=%d\n",n,i,n*i);
    }
}