#include <stdio.h>
#include <string.h>

int main()
{
    char ch[21];
    int a, b;
    int add = 0, mul = 1, sum = 0;

    fgets(ch, sizeof(ch), stdin);
    int size = strlen(ch);
    scanf("%d %d", &a, &b);

    for (int i = 0; i < size; i++)
    {
        if (ch[i] == '+')
        {
            add = a + b;
            sum = add + sum;
        }
        else if (ch[i] == '*')
        {
            mul = a * b;
            sum = mul + sum;
        }
    }

    printf("%d", sum);

    return 0;
}