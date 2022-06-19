#include <stdio.h>
#include <stddef.h>

int main(void)
{
    short apples = 10;
    short slots[4];
    short oranges = 20;

    int i;
    for (i = 0; i < 4; i++) {  /* Here we initialize the array */
        slots[i] = i + 1;
    }

    for (i = 0; i < 4; i++) {  /* Output the values in array */
        printf("array element %d is %d\n", i, *(slots + i));
    }


}