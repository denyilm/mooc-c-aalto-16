#include <stdio.h>
#include <math.h>

void multi_table(unsigned int xsize, unsigned int ysize)
{
    unsigned int diff=1;
    for(unsigned int j=1; j<=ysize; j++){
        for(unsigned int i=j; i<=xsize*j; i=i+diff){
            printf("%4u", i);
        }
        printf("\n");
        diff++;
        printf("\n");
    }
}

void draw_triangle(unsigned int size)
{
    char* hash = "#";
    char* point = ".";
    for(unsigned int j=0; j<size; j++){
        unsigned int h = size-j-1;
        unsigned int p = size-h;
        for(; p<size; p++){
            printf("%s", point);
        }
        for(; h<size; h++){
            printf("%s", hash);
        }
        printf("\n");
    }
}   

double distance(int x, int y)
{
	return sqrt(x * x + y * y);
}

void draw_ball(unsigned int radius)
{
    int y = 0+(int)radius;
    for(;y>(0-(int)radius)-1;y=y-1){
        for(int x = 0-(int)radius;x<(0+(int)radius)+1;x++){
            if(distance(x,y)<=(double)radius){
                printf("*");
            }else{
                printf(".");
            };
        }
        printf("\n");
    }
}