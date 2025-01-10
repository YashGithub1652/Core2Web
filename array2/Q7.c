#include<stdio.h>
void main(){
	
	int x;
	printf("Enter the no. Elements of the array:\n");
	scanf("%d",&x);

	int arr[x];
	int i;

	printf("Enter the Elements of the array:\n");
	
	for(i=0;i<x;i++){

		scanf("%d",&arr[i]);

		if(arr[i]%2==0){
	
			arr[i]=arr[i]*arr[i];

		}else{
	
			arr[i]=arr[i]*arr[i]*arr[i];

		}
        }

	printf("Enter the Square and cube of items of the array:\n");

	for(i=0;i<x;i++){

		printf("%d\n",arr[i]);
  
	}
}
