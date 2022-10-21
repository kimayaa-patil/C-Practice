//UNARY OPERATION ON POINTER

#include<stdio.h>
void main(){	

	int arr[] = {10,20,30,40,50};
	
	int *ptr1 = &(arr[0]);
	
	printf("%d\n",*(ptr1++));	//10
	printf("%d\n",*(++ptr1));	//30
	
	int *ptr2 = &(arr[0]);	
	ptr2++;
	
	printf("%d\n",*ptr2);		//20
	
	++ptr2;
	printf("%d\n",*ptr2);		//30
	
	int *ptr3 = &(arr[0]);
	
	printf("%p\n",ptr3);		//0x100
	printf("%d\n",(*ptr3++));	//10
	printf("%d\n",(*ptr3++));	//20
	printf("%d\n",ptr3);		//0x108
	
	int *ptr4 = &(arr[0]);
	
	printf("%d\n",((*ptr4)++));	//10
	printf("%d\n",((*ptr4)++));	//11
}
