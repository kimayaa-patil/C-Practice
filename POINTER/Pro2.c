//Dereferencing of Pointer (*)	(*)- Dereferencing Operator / ValueAt Operator

#include<stdio.h>
void main(){
	
	int x = 10;
	
	int *ptr1 = &x;
	int *ptr2 = x;		//Warning-(we can't put veriable in pointer 
	
	printf("%p\n",ptr1);	//0x54646 (Addres)
	printf("%p\n",ptr2);	//0xa ('a'-hexadicimal value of 10)
	
	printf("%d\n",*ptr1);	//10 (Dereferencing) 
	printf("%d\n",*ptr2);	//Segmentarion fault (core dumped)
	
	printf("End Main\n");	//line will not print becouse of segmentation fault
}
