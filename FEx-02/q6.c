#include<stdio.h>

int main()
{
    int x, y;
    printf("Enter the first number: ");
    scanf("%d", &x);
    printf("Enter the second number: ");
    scanf("%d", &y);

    if(x % y == 0){
        printf("The first number is divisible by the second number.");
    }
    else if(y % x == 0){
        printf("The second number is divisible by the first number.");
    }
    else{
        printf("None of them are divisible by the other.");
    }

    return 0;
}
