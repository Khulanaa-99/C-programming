#include <stdio.h>

int main() 
{
    int n,counter=1;
    printf("n: ");
    scanf("%d",&n);
    while(counter<=n)
    {
        printf("%d\n",counter);
        counter++;
    }
}