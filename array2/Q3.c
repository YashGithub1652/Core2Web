#include<stdio.h>
void main(){

	int x;

	printf("Enter the no. of the array:");
	scanf("%d",&x);

	int i;
	int arr[x];
	int Result=0;


	printf("Enter the array elements:\n");

	for(i=0;i<x;i++){
	
		scanf("%d",&arr[i]);
	
	}	
	
	printf("Array elements are:\n");

	for(i=0;i<x;i++){
	
		printf("%d\n",arr[i]);
	
	}

	printf("Sum of the square of the elements of the array:\n");

	for(i=0;i<x;i++){
	
		Result=Result + arr[i]*arr[i];

	}

	printf("%d\n",Result);

	

}
