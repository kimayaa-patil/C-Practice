#include <stdio.h>
void main(){
	
	int x = 10;
	int *ptr1 = &x;
	int **ptr2 = &ptr1;
	int **ptr3 = &ptr1;
	int ***ptr4 = &ptr2;
	
	printf("%d\n",x);		//10
	printf("%d\n",*ptr1);		//10
	printf("%d\n",**ptr2);		//10
	printf("%d\n",**ptr3);		//10
	printf("%d\n",***ptr4);	//10
	
	printf("%p\n\n",ptr1);		//0x100
	printf("%p\n",ptr2);		//0x200
	printf("%p\n",ptr3);		//0x200
	printf("%p\n",ptr4);		//0x300
}
	
	
	
	
	
