//WILD POINTER AND NULLPOINTER

#include<stdio.h>
void main(){
	
	int x = 10;
	
	//int *iptr;	//wild pointer  //segmentatiom fault in run time  //use NULL or 0
	
	int *iptr = NULL;	//null pointer  //iptr = &x
	iptr = &x;
	
	printf("%d\n",*iptr);
}
	
