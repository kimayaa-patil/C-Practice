//RELATIONSHIP BETWEEN 2D ARRY AND POINTER (INTERNAL OF POINTER)

#include<stdio.h>
void main(){

	int arr[3][3]={10,20,30,40,50,60,70,80,90};
	
	printf("%d\n",arr[0][2]);		//arr[0][2]
						//*(*(arr+0)+2)
						//*(*(arr+0*sizeof(Whole 1D array))+2*sizeof(Data Type Of Pointer))
						//*(*(100+0*(12))+2*(4))
						//*(*(100+8))
						//*(108)
						//30
						
	printf("%d\n",arr[1][0]);		//arr[1][0]
						//*(*(arr+1)+0)
						//*(*(arr+1*sizeof(Whole 1D array))+0*sizeof(Data Type Of Pointer))
						//*(*(100+1*(12))+0*(4))
						//*(*(112+0))
						//*(112)
						//40
						
	printf("%d\n\n",arr[2][1]);		//arr[2][1]
						//*(*(arr+2)+1)
						//*(*(arr+2*sizeof(Whole 1D array))+1*sizeof(Data Type Of Pointer))
						//*(*(100+2*(12))+1*(4))
						//*(*(124+4))
						//*(128)
						//80
	
	printf("%p\n",arr);			//0x100
	printf("%p\n",arr[0]);			//0x100
	printf("%p\n",arr[1]);			//0x112
	printf("%p\n\n",arr[2]);		//0x124
	
	printf("%p\n",&arr[0][2]);		//108
	printf("%p\n",&arr[1][1]);		//116
	printf("%p\n\n",&arr[2][0]);		//124
	
	printf("%ld\n",sizeof(arr));		//36
	printf("%ld\n",sizeof(arr[0]));	//12
	printf("%ld\n",sizeof(arr[0][0]));	//4
}
