#include <stdio.h>
int main()
{
    int x, y, i, gcd;

    scanf("%d %d", &x, &y);

    for(i=1; i <= x && i <= y; ++i)
    {
        if(x%i==0 && y%i==0)
            gcd = i;
    }

    printf("The GCD of %d and %d is %d. ", x, y, gcd);

    return 0;
}
