#include <stdio.h>

int main() 
{
    int n,c=1,sum=0,vrjwer=1;
    printf("n: ");
    scanf("%d",&n);
    while(c<=n)
    {
        sum=sum+c;
        vrjwer=vrjwer*c;

        c++;
    }
    printf("%d %d",sum, vrjwer);
}
