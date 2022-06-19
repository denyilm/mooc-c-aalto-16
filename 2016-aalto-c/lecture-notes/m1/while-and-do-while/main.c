#include <stdio.h>

int main(void)
{
    int a = 20;
    do {
        printf("value of a is now %d\n", a);
        printf("int %lu", sizeof(int));
        a++;
    } while (a < 10);
}