//VOID POINTER

#include<stdio.h>
void main(){
	
	int x = 10;
	int *iptr = &x;
	void *vptr = &x;
	
	printf("%p\n",iptr);		//0x100
	printf("%p\n",vptr);		//0x100
	
	printf("%d\n",*iptr);		//10
	//printf("%d\n",*vptr);	//ERROR : invalid use of void expression 
}
