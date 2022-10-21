//PRINT 2D ARRAY (TAKE VALUE FROME USER)



#include<stdio.h>
void main(){
	
	int r,c,a[3][3], sum=0;
	
	printf("Rows : ");
	scanf("%d",&r);
	
	printf("Colom : ");
	scanf("%d",&c);
	
	printf("\nEnter Elements :\n");
	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++){
			scanf("%d",&a[i][j]);
			sum = sum+a[i][j];
		}
	}
	
	printf("\nArray is : \n");
	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++){
			printf("%d ",a[i][j]);
			
		}
		printf("\n");
	}
	
	printf("\n");
	printf("Sum of Array is : %d\n",sum);
}
