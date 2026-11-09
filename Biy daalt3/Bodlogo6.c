#include <stdio.h>
int main()
{
    int sq[3][3];
    int i, j, sum, shalgah = 1;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &sq[i][j]);
        }
    }
    sum = sq[0][0] + sq[0][1] + sq[0][2];
    for (i = 0; i < 3; i++)
    {
        if (sq[i][0] + sq[i][1] + sq[i][2] != sum)
            shalgah = 0;
    }
    for (j = 0; j < 3; j++)
    {
        if (sq[0][j] + sq[1][j] + sq[2][j] != sum)
            shalgah = 0;
    }
    if (sq[0][0] + sq[1][1] + sq[2][2] != sum)
        shalgah = 0;
    if (sq[0][2] + sq[1][1] + sq[2][0] != sum)
        shalgah = 0;
    if (shalgah == 1)
        printf("Shidet kvadrat!");
    else
        printf("Shidet bish");
    return 0;
}