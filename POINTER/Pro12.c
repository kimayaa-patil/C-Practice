//VOID POINTER

#include<stdio.h>
void main(){

	int x = 10;
	int *iptr = &x;
	char *cptr = &x;		//WARNING : initialization of "char" from incompatible pointer type 'int *'
	
	printf("%d\n",*iptr);		//10
	printf("%d\n",*cptr);		//10
	
	char ch = 'A';
	int *iptr1 = &ch;
	char *cptr1 = &ch;
	
	printf("%d\n",*iptr1);		//Garbage Value	
	printf("%d\n",*cptr1);		//65
	
}
	 
