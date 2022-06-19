#include <stdio.h>
#include <stdlib.h>
#include "ships.h"

const unsigned int xsize = 10;
const unsigned int ysize = 10;
const unsigned int shiplen = 3;

/* implement these functions */

void set_ships(unsigned int num)
{
    unsigned int i = 0;
    while (i<num)
    {
        unsigned int x = rand() % xsize;
        unsigned int y = rand() % ysize;
        int dir = rand() % 2;
        if(place_ship(x, y, dir)){
            i++;
        }
    }
}

void print_field(void)
{
    unsigned int i=0;
    while(i<ysize){
        unsigned int j=0;
        while(j<xsize){
            if(is_visible(j,i)){
                printf("%c", is_ship(j,i));
            } else {
                printf("?");
            }
            j++;
        }
        printf("\n");
        i++;
    }
}

int shoot(void)
{
    unsigned int x;
    unsigned int y;
    scanf("%u %u", &x, &y);
    if(is_ship(x, y)=='!'){
        return -1;
    } else if(is_ship(x, y)=='.') {
        checked(x,y);
        return 0;
    } else if(is_ship(x,y)=='+') {
        checked(x,y);
        hit_ship(x,y);
        return 1;
    }
    return 0;
}

int game_over(unsigned int num)
{
	unsigned int hits = 0;
	for (unsigned int i = 0; i < xsize; i++) {
		for (unsigned int j = 0; j < ysize; j++) {
			if (is_ship(i, j) == '#') {
				hits++;
			}
		}
	}
	if (hits == num * 3) {
		return 1;
	}
	return 0;
}
