#include<stdio.h>
void main(){

	int size;

	printf("Enter the Size of the Array:\n");
	scanf("%d",&size);

	int arr[size];

	printf("Enter the Elements for Array:\n");

	for(int i=0;i<size;i++){
	
		scanf("%d",&arr[i]);

	}

	printf("Implementing 5 instead of 0 in Array Elements");

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
