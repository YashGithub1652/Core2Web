#include<stdio.h>
void main(){

	int x;

	printf("Enter the Size of the array:\n");
	scanf("%d",&x);

	int arr[x];

	printf("Enter the Elements of the Array:\n");

	for(int i=0;i<x;i++){
	
		scanf("%d",&arr[i]);
	}

	printf("Maximum Element of the Array is:\n");

	int max;
	max=arr[0];

	for(int i=1;i<x;i++){
		
		if(max<arr[i]){
			
			max=arr[i];
		}
	}

	printf("%d\n",max);
}
