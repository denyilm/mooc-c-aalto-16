#include <stdio.h>
#include <stdlib.h>
#include "source.h"


/* Dynamic Array Reader */
/* Parameters:
 * n: Number of values to be read
 * 
 * Returns: pointer to the dynamically allocated array
 */
int *dyn_reader(unsigned int n)
{
    int *array=malloc(n*sizeof(int));
    unsigned int i=0;
    while(i<n){
        int input;
        scanf("%d", &input);
        array[i]=input;
        i++;
    }
    return array;
}


/* Add to array */
/* Parameters:
 * arr: Existing array of integers
 * num: number of integers in the array before the call
 * newval: new value to be added
 * 
 * Returns: pointer to the allocated array
 */
int *add_to_array(int *arr, unsigned int num, int newval)
{
    int *newarr = realloc(arr, (num+1) * sizeof(int));
    if(newarr){
        newarr[num]=newval;
    }
    return newarr;
}