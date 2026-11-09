#include <stdio.h>
int main()
{
    int aqi[3][5] = {
        {210, 180, 250, 300, 190},
        {150, 170, 220, 260, 160},
        {280, 240, 310, 350, 230}
    };
    int i, j;
    int sum, maxSum = 0, day = 1;
    for (i = 0; i < 3; i++)
    {
        sum = 0;
        for (j = 0; j < 5; j++)
        {
            sum += aqi[i][j];
        }
        printf("Duureg %d : %.2f\n", i + 1, sum / 5.0);
    }
    for (j = 0; j < 5; j++)
    {
        sum = 0;
        for (i = 0; i < 3; i++)
        {
            sum += aqi[i][j];
        }
        if (sum > maxSum)
        {
            maxSum = sum;
            day = j + 1;
        }
    }
    printf("Bohir odor: %d (%d)",day,maxSum);
    return 0;
}