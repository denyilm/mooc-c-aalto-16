#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include "source.h"

int count_alpha(const char *str)
{
	int count=0;
	while(*str) {
		if(isalpha(*str)){
			count++;
		}
		str++;
	}
	return count;
}

int count_substr(const char *str, const char *sub){
	int count=0;
	const char *str_copy=str;
	char *sub_pos;
	while((sub_pos = strstr(str_copy, sub))){
		count++;
		printf("sub_pos: %s\n", sub_pos);
		str_copy = sub_pos + strlen(sub); 
		printf("new str: %s\n", str_copy);
	}
	return count;
}