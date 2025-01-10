#include<stdio.h>
void main(){

	int x;

	printf("Enter the Size of Array:\n");
	scanf("%d",&x);

	int arr[x];

	printf("Enter the Elements of the Array:\n");

	for(int i=0;i<x;i++){
	
		scanf("%d",&arr[i]);
	
	}
	
	printf("Printing elements of the Array in Reverse Order:\n");

	for(int i=0;i<x;i++){
	
	int temp=arr[i];

		while(temp!=0){
		
			int rem=temp%10;

			printf("%d",rem);

			temp=temp/10;
		}

		printf("\n");
	}
}
