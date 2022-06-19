#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

/* Don't touch the definition of msgs array! Checker uses this. */
char *msgs[10] = {
	"'6=*w+~)._", "J65+~5+~=0/*69,~+9;,9*~19++=79"
};

void ascii_chart(char min, char max)
{
    // printf("%d", (int) min - (int) max);
    int i;
    int j;
    for(i = (int) min; i < (int) max; ){
        for(j = 0; j < 4; j++){
            if(i <= (int) max){
                printf("%3d ", i);
                printf("0x%x ", i);
                if(isprint(i)){
                    printf("%c", i);
                } else {
                    printf("?");
                };
                if(j<3){
                    printf("\t");
                }
                i++;
            }
        }
        if(i < (int) max){
            printf("\n");
        }
    }
}

char get_character(int msg, unsigned int cc)
{
	if (msg >= 10 || !msgs[msg])
		return 0;

	if (strlen(msgs[msg]) <= cc)
		return 0;

	return msgs[msg][cc];
}

void secret_msg(int msg)
{
    unsigned int cc = 0;
    char c;
    while(1){
        c = get_character(msg, cc);
        if(c == 0){
            break;
        }
        printf("%c",158-c);
        cc++;
    }
}