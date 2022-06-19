#include <stdio.h>
#include <stddef.h>
#include "source.h"

/* */
void print_strarray(char *array[]){
	while(*array!=NULL){
		printf("%s\n",*array);
		array++;
	}
}

/* */
void str_to_strarray(char* string, char** arr){
	// int n=0;
	// int i=0;
	// /* 
	// save words except the last one e.g "... different"
	// this will record all the words except different
	// */
	// while(*string){
	// 	n++;
	// 	if(*string==' '){
	// 		for(int j=0; j<n; j++){
	// 			if(*(string-n+j+1)!=' '){
	// 				arr[i][j] = *(string-n+j+1);
	// 			} else {
	// 				arr[i][j] = '\0';
	// 			}
	// 		}
	// 		i++;
	// 		n = 0;
	// 	}
	// 	string++;
	// }
	// /* get the last word */
	// if(*string=='\0'){
	// 	while (*string!=' ')
	// 	{
	// 		string--;	
	// 	}
	// 	string++;
	// 	int j=0;
	// 	while (*string){
	// 		arr[i][j]= *string;
	// 		j++;
	// 		string++;
	// 	}
	// 	arr[i][j]='\0';
	// }
	// arr[i+1] = NULL;

	int i = 0; //string index
	int j= 0; //char index
	while (*string)
	{
		if(*string==' '){
			arr[i][j] = '\0';
			i++;
			j=0;
		} else {
			arr[i][j] = *string;
			j++;
		}
		string++;
	}
	arr[i][j]='\0';
	arr[i+1]=NULL;
}