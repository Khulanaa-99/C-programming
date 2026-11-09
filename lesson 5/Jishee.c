#include <stdio.h>

int main() 
{
    int n, c=1, x, max, sum=0, vrjwer=1, dundaj;
    printf("n: ");
    scanf("%d",&n);

    while(c<=n)
    {
        scanf("%d",&x);
        sum=sum+x;
        vrjwer=vrjwer*x;
        if(x>max)
            max=x;
        c++;
    }
    dundaj=sum/c;
    printf("max: %d\n",max);
    printf("sum: %d\n",sum);
    printf("vrjwer: %d\n",vrjwer);
    printf("dundaj: %d\n", dundaj);
    return 0;
}