#include<stdio.h>
void main(){
	
	int x;
	int i;
	int prod=1;

	printf("Enter the no. of array:\n");
	scanf("%d\n",&x);

	int arr[x];

	printf("Enter the Array Elements:\n");
	 
		for(i=0;i<x;i++){
		   scanf("%d\n",&arr[i]);
		}


	printf("Product of the even array elements is:");
		
		for(i=0;i<x;i++){
		
		   if(arr[i]%2==0){
		      prod=prod*arr[i];
		   }
		}	
	printf("%d\n",prod);
}
