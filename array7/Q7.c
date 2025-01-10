#include<stdio.h>
void main(){

	int size;

	printf("Enter the Size of the Array:\n");
	scanf("%d",&size);

	printf("Enter the Elements of the Array:\n");

	int arr[size];

	for(int i=0;i<size;i++){
		
		scanf("%d",&arr[i]);
	}

	int digit;

	printf("Enter Digit:\n");
	scanf("%d",&digit);
		
	printf("Printing Elements whose Addition Equals to Digit:\n");

	for(int i=0;i<size;i++){
	
		for(int j=0;j<size;j++){
		
			if(arr[i]+arr[j]==digit){
			
				printf("%d and %d\n",arr[i],arr[j]);
			}
		}
	}

}
