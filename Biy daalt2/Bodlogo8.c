#include <stdio.h>

int main() {
    int n,i, j,k;
    scanf("%d", &n);

    if (n < 1 || n > 10) 
    {
        printf("Buruu ondor");
        return 0;
    }

    for (i = 1; i <= n; i++) 
    {
        for (j = 1; j <= n - i; j++) 
        {
            printf(" ");
        }

        for ( k = 1; k <= 2 * i - 1; k++) 
        {
            printf("*");
        }

        printf("\n");
    }
    return 0;
}