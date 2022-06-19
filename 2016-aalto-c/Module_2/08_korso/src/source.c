#include "source.h"
#include "stdio.h"

/* Korsoraattori
 */
void korsoroi(char *dest, const char *src)
{
	int count_niinku=0;
	int count_totanoin=0;
	/* ks to x */
	while(*src){
		if(*src!='k' && *src!='t'){
			*dest = *src;
		}
		if(*src=='k'){
			src++;
			if(*src=='s'){
				*dest='x';
			} else {
				src--;
				*dest=*src;
			}
		}
		if(*src=='t'){
			src++;
			if(*src=='s'){
				*dest='z';
			} else {
				src--;
				*dest=*src;
			}
		}
		if(*src == ' '){
			count_niinku++;
			count_totanoin++;
			//add niinku
			if(count_niinku==3){
				char *niinku = "niinku";
				*dest = ' ';
				dest++;
				while (*niinku)
				{
					*dest = *niinku;
					dest++;
					niinku++;
				}
				count_niinku=0;
			}
			//totanoin
			if(count_totanoin==4){
				char *totanoin = "totanoin";
				*dest = ' ';
				dest++;
				while (*totanoin)
				{
					*dest = *totanoin;
					dest++;
					totanoin++;
				}
				count_totanoin=0;
			}
			*dest = ' ';
		}
		dest++;
		src++;
	}
	*dest = '\0';
}
