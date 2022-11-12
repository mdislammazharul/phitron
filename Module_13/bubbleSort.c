#include <stdio.h>

int main()
{
    int arr[8] = {12, 7, 9, 3, 15, 2, 6, 5};
    int min = arr[0];
    int min_index = 0;
    int sorted[8];

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (arr[j] <= min)
            {
                min = arr[j];
                min_index = i;
            }
        }
        sorted[0] = min;
        arr[min] = 9999;
    }

    printf("%d", min);
    return 0;
}