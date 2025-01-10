#include<stdio.h>
void main(){

	int size;

	printf("Enter the Size of the array:\n");
	scanf("%d",&size);

	int arr[size];

	printf("Enter Elements for the Array:\n");

	for(int i=0;i<size;i++){
	
		scanf("%d",&arr[i]);
	
	}

	printf("Printing Element which is appearing more than Size/2 times:\n");
	
	int count=0;

	for(int i=0;i<size;i++){

		for(int j=i+1;j<size;j++){
	
			if(arr[i]==arr[j]){
			
				count++;

			   	if(count>size/2){
			
					printf("%d\n",arr[i]);

					break;
				}
			}
		}
	}	

	if(count<size/2){

		printf("None\n");

	}

}
