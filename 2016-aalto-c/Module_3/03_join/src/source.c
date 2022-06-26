#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include "source.h"

int *join_arrays(unsigned int num1, int *array1, unsigned int num2, int *array2, unsigned int num3, int* array3) 
{
	int *merged_arr=malloc((num1+num2+num3)*sizeof(int));
	if(merged_arr){
		memcpy(merged_arr, array1, num1 * sizeof(int));
		memcpy(merged_arr+num1, array2, num2 * sizeof(int));
		memcpy(merged_arr+num1+num2, array3, num3 * sizeof(int));
	}
	return merged_arr;
}
