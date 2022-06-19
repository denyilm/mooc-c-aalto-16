#include <stdio.h>

int main(void)
{
    // int array[50];  // allocate space for 50 consecutive integers
    // int *intPtr = array;  // points to the beginning of array         
    // int i;
    // i = 50;
    // while (i > 0) {
    //    *intPtr = i * 2;  // the latter is ordinary multiplication operator
    //    int value= *(intPtr);
    //    intPtr++;  // move the pointer forward to next object in array 
    //    printf("%d ", value);
    //    i--;
    // }

    // intPtr = array;  // reset intPtr to the beginning of array
    // // intPtr = &i;

    // for (i = 0; i < 50; i++) {
    //     int value = *(intPtr + i);  // deference to i-th object in array 
    //     printf("%d ", value);
    // }
    
    int a = 5;
    int b = 5;
    int *pa = &a;
    int *pb = &b;

    printf("%p\n", (void *)pa);
    printf("%p\n", (void *)pb);
    if (pa == pb)
        printf("Pointers are same\n");
    else
        printf("Pointers are different\n");

    if (*pa == *pb)
        printf("Values are same\n");
}