#include <stdio.h>

int main() 
{
    int year, month , day, name;
    printf("Tursun on sar odor oruulna uu: ");
    scanf("%d %d %d",&year, &month, &day);
    name=(year-3)%12;
    if(name==1)
        printf("Hulgana\n");
    else if (name==2)
        printf("Vher\n");
    else if (name==3)
        printf("Bar\n");
    else if (name==4)
        printf("Tuulai\n");
    else if (name==5)
        printf("Luu\n");
    else if (name==6)
        printf("Mogoi\n");
    else if (name==7)
        printf("Mori\n");
    else if (name==8)
        printf("Honi\n");
    else if (name==9)
        printf("Bich\n");
    else if (name==10)
        printf("Tahia\n");
    else if (name==11)
        printf("Nohoi\n");
    else if (name==0)
        printf("Gahai\n");

    if ((month>=3 && month<=4) || (day>=21 && day<=19))
    {
        printf("Honi ord.");
    }else if((month>=4 && month<=5) || (day>=20 && day<=20))
    {
        printf("Vher ord.");
    }else if((month>=5 && month<=6) || (day>=21 && day<=20))
    {
        printf("Iher ord.");
    }else if((month>=6 && month<=7) || (day>=21 && day<=22))
    {
        printf("Melhii ord.");
    }else if((month<=7 && month>=8) || (day>=23 && day<=22))
    {
        printf("Arslan ord.");
    }else if((month>=8 && month<=9) || (day>=23 && day>=22))
    {
        printf("Ohin ord.");
    }else if((month>=9 && month<=10) || (day>=23 && day<=21))
    {
        printf("Jinlvvr ord.");
    }else if((month>=10 && month<=11) || (day>=23 && day<=21))
    { 
        printf("Helints ord.");
    }else if((month>=11 && month<=12) || (day>=22 && day<=21))
    {
        printf("Num ord.");
    }else if((month>=12 && month<=1) || (day>=22 && day<=19))
    {
        printf("Matar ord.");
    }else if((month>=1 && month<=2) || (day>=20 && day<=18))
    {
        printf("Humh ord.");
    }else if((month>=2 && month<=3) || (day>=19 && day<=20))
    {
        printf("Zagas ord.");
    }
}