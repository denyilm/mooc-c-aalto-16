#include <stdio.h>
#include <stddef.h>

// int my_readint(int *value)
// {
//     char c;
//     int ret;
//     ret = scanf("%c", &c);
//     if (ret == 1 && c >='0' && c <= '9') {
//         int num = c - '0';   // converting the character to integer
//         *value = num; // write value where pointer refers to
//         return 1;
//     }
//     return 0;
// }

int *read_int(int *number)
{
    int ret;
    if (number == NULL) { // Check the pointer before calling scanf
        return NULL; // If the pointer is invalid, the function exits
    }
    ret = scanf("%d", number);
    if (ret != 1) { // Check if an error occurred during reading
        return NULL;
    }
    return number;
}

int main(void)
{
    int a;
    int *ptr_a = &a;
    if (read_int(ptr_a))
        printf("reading succeeded: %d\n", a);
    else {
        printf("reading failed: %ls\n", ptr_a);
    }

    // here is another way to use the function
    // my_readint(&a);
}