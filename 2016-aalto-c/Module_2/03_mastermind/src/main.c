#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include "source.h"

int main()
{
    const int solution[6]={ 8, 3, 3, 7, 9, 8};
    const int guess[6]={8, 3, 3, 1, 1, 1};
    unsigned int len=6;
    char result[6];
    mastermind(solution, guess, result, len);
    for(unsigned int i=0; i<len; i++){
        printf("%c ", result[i]);
    }
}