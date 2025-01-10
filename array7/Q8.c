#include<stdio.h>
void main(){

	int size;

	printf("Enter the Size of the Array:\n");
	scanf("%d",&size);

	printf("Enter the Array Elements:\n");

	int arr[size];

	for(int i=0;i<size;i++){
	
		scanf("%d",&arr[i]);
	}

	printf("Emplementing 0 in Arrays Elements:\n");

	for(int i=0;i<size;i++){

	int temp=arr[i];
	
		while(temp!=0){
		
		int rem=temp%10;

			if(rem==0){
			
				printf("5");
			}else{
			
				printf("%d",rem);
			}

			temp=temp/10;

		}

		printf("\n");
	}
}
