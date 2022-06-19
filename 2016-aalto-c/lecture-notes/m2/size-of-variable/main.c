#include <stdio.h>
#include <stddef.h>

void a_func(int *param)
{
    int a = *param;
    a = a+1;
    printf("%d\n", a);
    printf("%p\n", param);
}

int main()
{
    short a;
    short *pa;
    printf("size a: %lu\n", sizeof(a));
    printf("size *pa: %lu\n", sizeof(pa));

    int d=10;
    int *b=&d;
    printf("%p\n", b);
    a_func(b);
}