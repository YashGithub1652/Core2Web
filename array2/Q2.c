#include<stdio.h>
void main(){

	int x;

	printf("Enter the no. array:");
	scanf("%d",&x);

	int i;
	char arr[x];

	printf("Enter the Character in array:\n");

	getchar();

	for(i=0;i<x;i++){
		
		scanf("%c",&arr[i]);

		getchar();
	}

	printf("Array elements are:\n");

	for(i=0;i<x;i++){
	
	
		printf("%c\n",arr[i]);

	}

	printf("ASCII value of the Input Elements are:\n");

	for(i=0;i<x;i++){

		printf("%d\n",arr[i]);
	
	}

}
