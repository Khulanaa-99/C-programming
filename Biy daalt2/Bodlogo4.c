#include <stdio.h>

int main()
{ 
    int number=0;
    scanf("%d",&number);
    if(number<=9)
    {
        if(number==1 || number==6)
           printf("Davaa");
        else if(number==2 || number==7)
           printf("Myagmar");
        else if(number==3 || number==8)
           printf("Lhagva");
        else if(number==4 || number==9)
           printf("Purev");
        else if(number==9 || number==0)
           printf("Baasan");
    }else
    {
        printf("Buruu too");
    }
}