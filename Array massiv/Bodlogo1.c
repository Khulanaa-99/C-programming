#include <stdio.h>

int main()
{
    int n,i,tegsh=0,sondgoi=0;
    scanf("%d",&n);
    int a[n];
    for(i=0 ; i<n ; i++)
    {
        scanf("%d",&a[i]);
        if(tegsh%2==0)
            tegsh++;
        else
            sondgoi++;
    }
    if(sondgoi>tegsh)
        printf("YES");
    else
        printf("NO");
}