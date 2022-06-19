#include <stdio.h>

int main(void)
{
    int days, years;
    scanf("%d %d", &days, &years); // return value omitted -- trust the user
    if (days > 365) {
        years = years + 1;
        days = days - 365;
    }
    else
        printf("%d days remaining until the next year\n", 365 - days);
        /* No curly braces in the else branch --
        this part of code is executed in both cases */
    printf("days: %d  years: %d\n", days, years);
}