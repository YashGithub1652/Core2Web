#include<stdio.h>
void main(){

	int x;

	printf("Enter the Size of the Arrays:\n");
	scanf("%d",&x);

	printf("Enter Elements of Array1:\n");

	int arr1[x];
	int arr2[x];

	for(int i=0;i<x;i++){
	
		scanf("%d",&arr1[i]);
	}

	printf("Enter the Element of the Array2:\n");

	for(int i=0;i<x;i++){
	
		scanf("%d",&arr2[i]);
	}

	printf("UNcommon Element of the Arrays are:\n");

	for(int i=0;i<x;i++){
	
		for(int j=0;j<x;j++){
		
			if(arr1[i]!=arr2[j]){
			
				printf("%d\n",arr1[i]);
			}
		}
	
	}
}
