#include <stdio.h>

int main()
{
    int n , i , a[100],sum[6]={0},max,k;

    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum[a[i]]++;
    }    
    for (i = 1; i <= 5; i++) 
    {
        if(sum[i] > max)
        {
            max = sum[i];
            k=i;
        }
           
        printf("%d:%d ",i,sum[i]);
    } 
    printf("Yalagch: %d",k);
}