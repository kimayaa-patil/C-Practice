//SUBTRACTION OF POINTER 

//CODE 1

#include<stdio.h>
void main(){
	
	int arr[] = {10,20,30,40,50};
	
	int *ptr1 = &(arr[0]);		
	int *ptr2 = &(arr[3]);	
	
	printf("%d\n",*ptr1);		//10
	printf("%d\n",*ptr2);		//40
	
	printf("%d\n",ptr2-ptr1);	//3
	printf("%d\n",ptr1-ptr2);	//-3
	
//CODE 2

	int arr1[] = {10,20,30,40,50};
	
	int *ptr3 = &(arr[0]);
	int *ptr4 = &(arr[1]);
	
	int x = ptr3-ptr4;
	
	printf("%d\n",x);		//-1
	
	//printf("%d\n",ptr1*ptr2);	//ERROR : invalid operands to binary *
	//printf("%d\n",ptr1/ptr2);	//ERROR : invalid operands to binary /
	//printf("%d\n",ptr1%ptr2);	//ERROR : invalid operands to binary %
	//printf("%d\n",ptr1+ptr2);	//ERROR : invalid operands to binary +
	
	//ONLY SUBTACTION CAN ALLOWD ON TWO POINTER OPERATIONS
	
}

