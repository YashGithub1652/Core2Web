#include<stdio.h>
void main(){

	int size;
	printf("Enter the Size of the Array:\n");
	scanf("%d",&size);

	int arr[size];

	printf("Enter Element for the Array:\n");

	for(int i=0;i<size;i++){
	
		scanf("%d",&arr[i]);
	}

	printf("Calcuating Frequency of Each Element:\n");

	for(int i=0;i<size;i++){

	int count=0;

		for(int j=0;j<size;j++){

			if(arr[i]==arr[j]){	

				count++;
			}
		}

		printf("%d is %d\n",arr[i],count);
	}
}
