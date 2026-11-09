#include <stdio.h>

int main()
{
    int secret = 42;
    int a ,i,sum=0;

    while(i>0)
    {
        printf("Too oruul: ");
        scanf("%d",&a);
        if(a>secret)
            printf("Ih baina.\n");
        if(a<secret)
            printf("Baga baina.\n");
        if(sum==6)
        {
            printf("Hojigdloo");
            break;
        }
        if(a==secret)
        { 
            printf("Hojloo! %d oroldlogoor",sum);
            break;
        }
        sum++;
        i++;
    }
}