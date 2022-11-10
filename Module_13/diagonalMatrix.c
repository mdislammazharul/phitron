#include <stdio.h>
#include <stdbool.h>

int main()
{
    int row, col;
    bool flag = true;
    scanf("%d %d", &row, &col);

    int mat[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    if (row == col)
    {
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                if ((row - 1) == (i + j))
                {
                    continue;
                }
                if (mat[i][j] != 0)
                {
                    flag = false;
                }
            }
        }
        if (flag == true)
        {
            printf("Diagonal");
        }
        else
        {
            printf("Not Diagonal");
        }
    }
    else
    {
        printf("Not_Diagonal");
    }

    return 0;
}