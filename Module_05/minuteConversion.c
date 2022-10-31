#include <stdio.h>

int main()
{
    int inputMin, months, weeks, days, hours, min;
    printf("Enter number of Min\n");
    scanf("%d", &inputMin);

    months = inputMin/43200;
    inputMin = inputMin - months*43200;

    weeks = inputMin/10080;
    inputMin = inputMin - weeks*10080;

    days = inputMin/1440;
    inputMin = inputMin - days*1440;

    hours = inputMin/60;
    inputMin = inputMin - hours*60;

    min = inputMin;

    printf("Months : %d\n", months);
    printf("Weeks : %d\n", weeks);
    printf("Days : %d\n", days);
    printf("Hours : %d\n", hours);
    printf("Min : %d", min);

    return 0;
}
