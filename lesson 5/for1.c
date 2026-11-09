//n too garaas ogno 1-n hvrtelh toog niilber vrjwer 

#include <stdio.h>

int main() 
{
    int i,n,sum=0,s=1,max,a;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a);
        if(i==1) max=a;
        sum=sum+a;
        s=s*a;
        if(a>max)
           max=a;

    }
    printf("sum:%d\n",sum);
    printf("s:%d\n",s);
    printf("max:%d",max);
}
