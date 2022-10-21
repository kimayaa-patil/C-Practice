#include<stdio.h>
void main(){
	
	int arr[] = {10,20,30,40};
	
	int *ptr1 = &(arr[1]);		//Address - 104
	
	printf("%d\n",*ptr1);		//20 - ValueAt(Address of ptr) - ValueAt(104) - 20
	
	printf("%d\n",*(ptr1+2));	//40 - (ptr1 + 2 * SizeOf(DPT)) - (104+2*4) - (112) - 40 
}
