#include <stdio.h>

int main(void)
{
    int numA = 10;
    float numB = 2.54;
    float numC = 0.000001;
    printf("At least five characters long: [%5d]\n", numA);
    printf("Length is six, one decimal shown: [%6.1f]\n", numB);
    printf("Float number, aligned left: [%-10.2e]\n", numC);
    printf("Number with leading zeros: [%05d]\n", ++numA);
}