#include <stdio.h>

int main()
{
    int i=1, money, hadgalamj, utasVne, sar,niitDun;
    scanf("%d %d %d",&money,&hadgalamj,&utasVne);
    while(i<utasVne)
    {
        if(money+hadgalamj>utasVne)
        {
            printf("0");
            return 0;
        }
        niitDun=utasVne/hadgalamj;
        i++;
    }
    printf("%d sar",niitDun);
}