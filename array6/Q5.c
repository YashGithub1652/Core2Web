#include<stdio.h>
void main(){

	int x;

	printf("Enter the Size of the Array:\n");
	scanf("%d",&x);

	int arr[x];

	printf("Enter the Elements of the Array:\n");

	for(int i=0;i<x;i++){
	
		scanf("%d",&arr[i]);
	}

	int element;
	int count=0;

	printf("Enter the element to be Determined:\n");
	scanf("%d",&element);

	printf("Frequency Of Entered Element is:\n");

	for(int i=0;i<x;i++){
	
		if(arr[i]==element){
		
			count++;
		}
	}

	if(count>0){
	
		printf("%d\n",count);
	}else{
	
		printf("None\n");
	}
}
