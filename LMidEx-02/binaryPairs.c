#include <stdio.h>
#include <string.h>

int main()
{
    char ch[1001];
    int i, j, t, n;
    int countArr[101];

    scanf("%d", &t);

    int count = 0;
    scanf("%d", &n);
    fgets(ch, sizeof(ch), stdin);

    printf("%s", ch);

    // for (j = 0; j < strlen(ch); j++)
    // {
    //     if (ch[j] + ch[j + 1] == 1)
    //     {
    //         countArr[i] = count++;
    //     }
    // }

    // for (i = 0; i < t; i++)
    // {
    //     printf("%d", countArr[i]);
    // }

    return 0;
}