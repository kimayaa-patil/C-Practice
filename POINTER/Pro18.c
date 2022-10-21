//MULTIDYMENTIONAL ARRAY

#include<stdio.h>
void main(){

//CODE 1
	
	printf("CODE : 1\n");
	
	int arr[3] = {1,2,3,4};
	int arr1[][3] = {{1,2,3,4},{5,6},{7,8,9}};
	
	printf("%d\n",arr[3]);		//1
	printf("%d\n",arr1[0][3]);	//5
	
//CODE 2
	
	printf("\nCODE : 2\n");
	
	int r,c;
	printf("Rows : ");
	scanf("%d",&r);
	
	printf("Colom : ");
	scanf("%d",&c);
	
	int arr2[r][c];
	for (int row=0; row<r; row++){
		for (int col=0; col<c; col++){
			scanf("%d",&arr2[row][col]);
		}
	}
	
	for (int row=0; row<r; row++){
		for (int col=0; col<c; col++){
			printf("%d ",arr2[row][col]);
		}
		printf("\n");
	}
	
//CODE 3

	printf("\nCODE : 3\n");
	
	for (int row=0; row<c+r; row++){
		printf("%d\n",arr2[row]);
	}	
}
