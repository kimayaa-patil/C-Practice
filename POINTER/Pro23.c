//POINTER TO POINTER

#include<stdio.h>
void main(){
//CODE 2
	printf("CODE 1\n");
	int x = 10;
	int *iptr1 = &x;
	int *iptr2 = iptr1;
	
	int **iptr3 = &iptr1;
	
	printf("%d\n",x);		//10
	printf("%d\n",*iptr1);		//10
	printf("%d\n",*iptr2);		//10
	printf("%d\n",**iptr3);	//10
	
	int **iptr4 = iptr1;		//Warning : initialization of ‘int **’ from incompatible pointer type
	//printf("%d\n",**iptr4);	//Segmentation fault (core dumped)

//CODE 2
	printf("\nCODE 2\n");	
	int a = 10;
	int *ptr5 = &x;
	int **ptr6 = &ptr5;
	int **ptr7 = &ptr5;
	int ***ptr8 = &ptr6;
	
	printf("%d\n",a);		//10
	printf("%d\n",*ptr5);		//10
	printf("%d\n",**ptr6);		//10
	printf("%d\n",**ptr7);		//10
	printf("%d\n",***ptr8);	//10
	
	printf("%p\n",ptr5);		//0x100
	printf("%p\n",ptr6);		//0x200
	printf("%p\n",ptr7);		//0x200
	printf("%p\n",ptr8);		//0x300
	
//CODE 3
	printf("\nCODE 3\n");
	int arr[5] = {10,20,30,40,50};
	int *ptr9 = arr;
	int *ptr10 = &arr;		//initialization of ‘int *’ from incompatible pointer type ‘int (*)[5]’
	
	int (*ptr11)[5] = &arr;	//Pointer to Array
	int *ptr12[5] = {&arr[0],&arr[1]};
	
	
}
	
	
