#include<stdio.h>

int main()
{
    int x;

    printf("Enter the weight of the watermelon: ");
    scanf("%d", &x);

    if(x%2 == 0 && x != 2)
    {
        int q;
        q = x /2;
        if(q %2 == 0)
        {
            printf("Possible");
        }
        else
        {
            printf("Not Possible");
        }
    }
    else
    {
        printf("Not Possible");
    }

    return 0;
}
