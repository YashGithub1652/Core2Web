#include<stdio.h>

void main(){
	 
	int x;
	int i;

	printf("Enter the no. of array\n");
	scanf("%d",&x);

	int arr[x];
	
	printf("Enter the elements of the array\n");

	for(i=0;i<x;i++){
		scanf("%d\n",&arr[i]);
	
	}

	printf("Even Elements are=\n");
	for(i=0;i<x;i++){
	if(i%2==0){
		printf("%d\n",arr[i]);
	
	}

}
}
