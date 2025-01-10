#include<stdio.h>
void main(){
	
	int x;
	
	printf("Enter no. of array:\n");
	scanf("%d",&x);

	int arr[x];
	int i;
	int sum=0;

	printf("Array elements are:\n");

		for(i=0;i<x;i++){
		     scanf("%d",&arr[i]);
		     sum=sum+arr[i];
		}


	printf("Sum of the array elements are:%d\n",sum);	
}
