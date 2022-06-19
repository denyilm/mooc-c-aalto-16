#include <stdio.h>
#include <math.h>

void simple_sum(void)
{
    int a;
    int b;
    scanf("%d %d",&a, &b);
    int c = a + b;
    printf("%d + %d = %d\n", a, b, c);
}

void simple_math(void)
{
    float a;
    float b;
    float c;
    char o;
    int err = 0;

    scanf("%f %c %f", &a, &o, &b);

    switch (o){
    case '+':
        c = a + b;
        break;
    case '-':
        c = a - b;
        break;
    case '*':
        c = a * b;
        break;
    case '/':
        c = a / b;
        break;
    default:
        printf("ERR\n");
        err = 1;
        break;
    }
    if(err !=1){
        printf("%.1f\n", c);
    }
}