#include <stdio.h>

int main(void)
{
    int a;
    scanf("%d", &a);
    int a_res = a < 5;
    printf("a less than 5: %d\n", a_res);
    printf("a equal to 5: %d\n", a == 5);
}