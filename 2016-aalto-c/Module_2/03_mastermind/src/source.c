#include <stdio.h>
#include "source.h"

void mastermind(const int *solution, const int *guess, char *result, unsigned int len){
    unsigned int i;
    for(i=0;i<len;i++){
        unsigned int j;
        result[i]='-';
        unsigned int a_guess=guess[i];
        for(j=0;j<len;j++){
            unsigned int a_solution=solution[j];
            if(a_solution==a_guess){
                result[i]='*';
                if(i==j){
                    result[i]='+';
                    break;
                }
            }
        }
    }
}