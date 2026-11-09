#include <stdio.h>

int main()
{
    int n,avg=1, vldegdel;
    scanf("%d",&n);
    if(n%2==0)
    { 
        avg=n/2;
        printf("Tentsuu: tus bvr %d", avg);
    }
    else 
    {
        avg=n/2;
        vldegdel=n%avg;
        printf("tus bvr: %d, %d ilvv", avg , vldegdel);
    }
}