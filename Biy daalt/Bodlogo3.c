#include <stdio.h>

#define RATE 3450.0

float to_usd(float mnt)
{
    return mnt / RATE;
}
float to_mnt(float usd)
{
    return usd * RATE;
}

int main()
{
   float tugrug , dollar;
   scanf("%f",&tugrug);
   printf("%.2f\n",to_usd(tugrug));
   scanf("%f",&dollar);
   printf("%.2f",to_mnt(dollar));
   
}