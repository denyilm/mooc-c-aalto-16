#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include "source.h"

int main()
{
    int val1 = 4; int val2 = 5;
    number_swap(&val1, &val2);
    if (val1 == 5 && val2 == 4) {
        printf("Great, it worked!\n");
    }

    int valarray[3] = { 10, 100, 1000 };
    int ret = array_sum(valarray, 3);
    printf("%d\n",ret);


    int array[10];
    int n = array_reader(array, 10);
    printf("%d numbers read\n", n);
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
}