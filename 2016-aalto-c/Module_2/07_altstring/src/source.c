#include <stdio.h>
#include <stddef.h>
#include "source.h"

/* */
void es_print(const char *s){
	while(*s!='#'){
		printf("%c",*s);
		s++;
	}
}

/* */
unsigned int es_length(const char *s){
	unsigned int i = 0;
	while(*s!='#'){
		i++;
		s++;
	}
	return i;
}

/* */
int es_copy(char *dst, const char *src){
	unsigned int len = es_length(src);
	int i=0;
	while (*src!='#'){
		*dst = *src;
		dst++;
		src++;
		i++;
	}
	*dst = '#';
	return i;
}

/* */
char *es_token(char *s, char c){
	while(*s!='#'){
		if(*s==c){
			*s='#';
			return s+1;
		}
		s++;
	}
	return NULL;
}

/* */
int es_demo(char *s, char c){
	return 1;
}