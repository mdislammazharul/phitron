#include <stdio.h>

int main()
{
    int i, j;
    int m, n;
    scanf("%d %d", &m, &n);
    int arr[m][n];

    for (i = 1; i <= m; i++)
    {
        for (j = 1; j <= n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (i = 1; i <= m; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (arr[i][j] == i && arr[i][j] == j)
            {
                arr[i][j] = arr[i][j] + 3;
                continue;
            }
            else if (arr[i][j] == i)
            {
                arr[i][j] = arr[i][j] + 2;
                continue;
            }
            else if (arr[i][j] == j)
            {
                arr[i][j] = arr[i][j] + 1;
                continue;
            }
        }
    }

    for (i = 1; i <= m; i++)
    {
        for (j = 1; j <= n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}