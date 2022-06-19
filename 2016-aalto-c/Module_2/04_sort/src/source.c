#include "source.h"
#include <stdio.h>

void sort(int *start, int size)
{
	int smallest=start[0];
	int first=0;
	int found;
	int next;
	int check;
	while(first<size){
		check=1;
		for(int i=first; i<size; i++){
			if(smallest>start[i]){
				found=start[i];
				next=start[first+1];
				start[i]=next;
				start[first+1]=smallest;
				start[first]=found;
				check=0;
				break;
			}
		}
		smallest=start[first];
		if(check){
			first++;
			smallest=start[first];
		}
	}
}