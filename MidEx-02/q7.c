#include <stdio.h>
#include <string.h>

int main()
{
    char s[50];
    char t[50];

    fgets(s, sizeof(s), stdin);
    fgets(t, sizeof(t), stdin);

    int lenS = strlen(s) - 1;
    int lenT = strlen(t) - 1;

    if (lenS > lenT)
    {
        printf("%s is greter than %s", s, t);
        return 0;
    }
    else if (lenS < lenT)
    {
        printf("%s is greter than %s", s, t);
        return 0;
    }
    else
    {
        for (int i = 0; i < lenS; i++)
        {
            if (s[i] > t[i])
            {
                printf("%s is greter than %s", s, t);
                return 0;
            }
            else if (s[i] < t[i])
            {
                printf("%s is greter than %s", t, s);
                return 0;
            }
        }
        printf("Both %s and %s are equal", s, t);
    }

    return 0;
}