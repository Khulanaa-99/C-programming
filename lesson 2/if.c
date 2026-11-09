#include <stdio.h>

int main() 
{
    printf("Гурван тооны их\n");
    int x,y,b,max;
    scanf("%d%d%d", &x, &y, &b);
    if (x>y && x>b)
       max=x;
    else if(y>x && y>b)
       max=y;
    else 
        max=b;
    printf("%d",max);
    return 0;
}

