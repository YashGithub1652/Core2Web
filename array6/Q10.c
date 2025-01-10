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

	if(x%2==0){
		
		printf("Printing Alternate of the Array:\n");

		for(int i=0;i<x;i++){
		
			if(i%2==0){
			
				printf("%d\n",arr[i]);
			}
		}
	}else{
	
		printf("Printing Whole Array:\n");

		for(int i=0;i<x;i++){
		
			printf("%d\n",arr[i]);
		}
	
	}
}
