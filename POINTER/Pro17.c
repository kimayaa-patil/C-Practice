//MULTIDYMENTIONAL ARRAY

#include<stdio.h>
void main(){
	
	int arr[] = {1,2,3,4,5,6,7,8,9};
	
	int arr1[3][3] = {1,2,3,4,5,6,7,8,9};		//1 2 3     4 5 6     7 8 9
	
	int arr2[2][3] = {1,2,3,4};			//1 2 3     4 0 0
	
	int arr3[][3] = {1,2,3,4,5,6,7,8,9};		//1 2 3     4 5 6     7 8 9
	
	int arr4[][3] = {{1,2,3},{4,5},{6}};		//1 2 3     4 5 0     6 0 0
	
	int arr5[][3] = {1,2,3,4,{5,6}};		//1 2 3     4 0 0     5 6 0
	
	//int arr6[][] = {1,2,3,4,5,6,7,8,9};		Error : array type has incomplete element type (Colum size is compulsary);
	
	//int arr7[3][] = {1,2,3,4,5,6,7,8,9};	Error : array type has incomplete element type (Colum size is compulsary);
	
}		 
