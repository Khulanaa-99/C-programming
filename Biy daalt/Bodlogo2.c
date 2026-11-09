#include <stdio.h>

int buuz_price(int count)
{
    return count * 1500;
}

int main()
{
   int a;
   scanf("%d", &a);
   printf("Niit vne: %d",buuz_price(a));
}