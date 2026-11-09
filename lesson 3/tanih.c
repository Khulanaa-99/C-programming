#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() 
{
    srand(time(NULL));
    int random_4_digit = (rand() % 9000)+ 1000;
    int phone, provider,number, found=0;
    char name[50];
    printf("Нэвтрэх нэр оруулна уу: ");
    scanf("%s",name);
    printf("Утасны дугаар оруулна уу: ");
    scanf("%d",&phone);
    provider=phone/1000000;
    if(provider==99 || provider==95)
    {
        printf("Mobicom Амжилттай нэвтэрлээ\n");
        printf("OTP: %d Баталгаажуулах код\n", random_4_digit);
        found=1;
    }
    else if (provider==88 || provider==89)
    {
        printf("Unitel Амжилттай нэвтэрлээ\n");
        printf("OTP: %d Баталгаажуулах код\n", random_4_digit);
        found=1;
    }
    else if (provider==91 || provider==90)
    {
        printf("Skytel Амжилттай нэвтэрлээ\n");
        printf("OTP: %d Баталгаажуулах код\n", random_4_digit);
        found=1;
    }
    else if (provider==98 || provider==93)
    {
        printf("G mobile Амжилттай нэвтэрлээ\n");
        printf("OTP: %d Баталгаажуулах код\n", random_4_digit);
        found=1;
    }
    else 
        printf("Дугаар буруу байна.Дахин дугаар оруулна: ");

    if (found==1)
    {
        scanf("%d", &number);
        if (random_4_digit==number)
            printf("Код зөв байна.");
        else
            printf("Код буруу байна.");
    }
    return 0;
}