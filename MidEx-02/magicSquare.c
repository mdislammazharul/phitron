#include <stdio.h>

int main()
{
    int mat[3][3];
    int i, j, k, rowSum = 0, sum[8], count = 0, colSum = 0;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            rowSum += mat[i][j];
        }
        sum[count] = rowSum;
        count++;
        rowSum = 0;
    }

    for (j = 0; j < 3; j++)
    {
        for (i = 0; i < 3; i++)
        {
            colSum += mat[i][j];
        }
        sum[count] = colSum;
        count++;
        colSum = 0;
    }

    sum[6] = mat[0][0] + mat[1][1] + mat[2][2];
    sum[7] = mat[0][2] + mat[1][1] + mat[2][0];

    for (i = 0; i < 8; i++)
    {
        if (sum[0] != sum[i])
        {
            printf("No");
            return 0;
        }
        else
        {
            continue;
        }
    }
    printf("Yes");

    return 0;
}