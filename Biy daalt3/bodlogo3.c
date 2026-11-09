#include <stdio.h>

int main()
{
    int n , i , a[20];

    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        
    }
    for(i=0;i<n/2;i++)
    {
        if(a[i]!=a[n-i-1])
        {
            printf("Palindrom bish");
            return 0;
        }
    
    }
    printf("Palindrom");
}