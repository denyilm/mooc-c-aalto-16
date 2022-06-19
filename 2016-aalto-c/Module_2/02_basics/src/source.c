#include <stdio.h>
#include "source.h"

void number_swap(int *a, int *b)
{
    int val_b = *b;
    int val_a = *a;
    *b=val_a;
    *a=val_b;
}

int array_sum(int *array, int count)
{
    int sum = 0;
    int i = 0;
    while(i<count){
        sum += *(array+i);
        i++;
    }
    return sum;
}

int array_reader(int *vals, int n){
    int i;
    for(i=0; i<n; i++){
        int input;
        int ret=scanf("%d ", &input);
        if(ret){
            // vals[i]=input;
            *(vals+i)=input;
        } else {
            break;
        }
    }
    return i;
}