//OPERATION ON POINTER

//1. ADDITION OPERATION - We Cant Perform Addition Of Two Pointer       


#include<stdio.h>
void main(){

	int x = 10;
	int y = 20;
	
	int *ptr1 = &x;
	int *ptr2 = &y;
	
	printf("%d\n",*ptr1+*ptr2);	//30 (10+20)
	
	//printf("%p\n",ptr1+ptr2);	Error - invalid operands to binary + (pointr Addition Not Allowed
	
	char ch1 = 'A';
	char ch2 = 'B';
	
	char *ptr3 = &ch1;
	char *ptr4 = &ch2;
	
	printf("%d\n",*ptr3+*ptr4);	//131 - (we perform Addition on Run Time) (otherwise it will be wrap up)	
	//printf("%p\n",ptr3+ptr4);	Error - invalid operands to binary + (pointr Addition Not Allowd

}
