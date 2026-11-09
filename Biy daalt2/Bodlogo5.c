#include <stdio.h>

int main()
{
    int n, i, dun, sum=0,tentssen=0;
    float dundaj=1;
    scanf("%d", &n);
    for(i=1 ; i<=n ; i++)
    {
        scanf("%d", &dun);
        sum=sum+dun;
        dundaj=sum*1.0/n;
        if(60<dun)
            tentssen=tentssen+1;
    }
    printf("Niilber:%d Dundaj:%.2f Tentssen:%d",sum,dundaj,tentssen);
    
}