#include <stdio.h>

int main() 
{
    int code=9900, menu=0;
    float balance=500000, money, vldegdel;
    printf("*****ATM*****\n");
    printf("Nuuts ug oruulna uu: \n");
    scanf("%d", &code);
    if (code==9900)
    {
     
        while(menu!=5)
        {
            printf("Amjilttai newterlee\n");
            printf("1. Orlogo hiih: \n");
            printf("2. Zarlaga hiih: \n");
            printf("3. Vldegdel shalgah: \n");
            printf("4. Kartaa awah: \n");
            printf("5. Garah: \n");
        scanf("%d", &menu);
        if(menu==1)
        {
            printf("Vne dun oruulna uu: \n");
            scanf("%f",&money);
            vldegdel=balance+money;
            printf("%2.f\n", vldegdel);

        }else if (menu==2)
        {
            printf("Vne dun oruulna uu: \n");
            scanf("%f",&money);
            vldegdel=balance-money;
            printf("%2.f\n", vldegdel);

        } else if (menu==3)
        {
            printf("Dansnii uldegdel %2.f baina. \n", balance);
        }else if(menu==4)
        {
            printf("Kartaa awna uu. ");
        }
    }
    } else 
    {
        printf("Nuuts ug buruu baina: ");
    }
    
}