//RELATION BETWEEN ARRAY TO POINTER 


//CODE 1 :

#include<stdio.h>
void main(){
	
	printf("CODE 1 \n");
	
	int size;
	printf("Size : ");
	scanf("%d",&size);
	
	int arr[size];
	printf("Enter elements : \n");
	
	for (int i=0; i<size; i++){
		scanf("%d",&arr[i]);
	}
	
	printf("Elements Are : \n");
	for (int i=0; i<size; i++){
	
		printf("%d ",arr[i]);		//Both line are same bcoz
		printf("%d\t",*(arr+i));	//Array Internally Pointer
	}
	printf("\n\n");
	
	
//CODE 2 : 
	
	printf("CODE 2 \n");
	
	int arr1[] = {10,20,30,40,50};
	int arr2[] = {60,70,80,90,100};
	
	int *ptr1 = arr1;			//Both line are same coz
	int *ptr2 = &(arr1[0]);		//Address of array and address of 0th index of array both are same

	printf("%d\n",*ptr1);			//10
	printf("%d\n",*ptr2);			//10
	
	printf("\n\n");
	
//CODE 3 :
	
	printf("CODE 3 \n");
	
	int *ptr3 = arr1;
	int *ptr4 = &arr1;
	
	ptr3 ++;
	ptr4 ++;
	
	printf("%d\n",*ptr3);			//20
	printf("%d\n",*ptr4);			//20
	
	int ptr5 = arr1+1;
	int ptr6 = &arr+1;
	
	printf("\n\n");
	
	printf("%d\n",*ptr3);			//20
	printf("%d\n",*ptr4);			//20
	
}
