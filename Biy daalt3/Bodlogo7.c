#include <stdio.h>
int main()
{
    int f[4][4];
    int i, j, x, y, count;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            scanf("%d", &f[i][j]);
        }
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            if (f[i][j] == 1)
            {
                printf("* ");
            }
            else
            {
                count = 0;
                for (x = i - 1; x <= i + 1; x++)
                {
                    for (y = j - 1; y <= j + 1; y++)
                    {
                        if (x >= 0 && x < 4 && y >= 0 && y < 4)
                        {
                            if (f[x][y] == 1)
                                count++;
                        }
                    }
                }
                printf("%d ", count);
            }
        }
        printf("\n");
    }
    return 0;
}