#include <stdio.h>

int max2(int a, int b)
{
   int max=a;
    if(a>max)
       max=a;
    return a;
}
int max3(int a, int b, int c)
{
   int max;
   max=max2(a,b);
   max=max2(max,c);
   return c;
}
int main()
{
    int x,y,n;
    scanf("%d %d %d", &x , &y , &n);
    printf("%d",max3);
}
