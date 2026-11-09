#include <stdio.h>

int main() 
{
    int n,c=1;
    printf("n: ");
    scanf("%d",&n);
    while(c<=n)
    {
        if (c%2==0)
            printf("%d tegsh\n",c);
        else
            printf("%d sondgoi\n",c);
        c++;
    }
}