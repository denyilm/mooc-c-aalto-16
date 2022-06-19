#include <stdio.h>

int main(void)
{
    char a = 10;
    char b = 12;
    int c = 123456;
    char *d = &a;
    char *e;

    e = d;
    printf("*e: %d   e: %p\n", *e, e);

    *d = 13;
    printf("*d: %d   d: %p   *e: %d   a: %d\n", *d, d, *e, a);
    if (*d > b)
        printf("New value is greater than b!\n");
}