#include<stdio.h>
void main(){

	int num;

	printf("Enter the no. of array:\n");
	scanf("%d",&num);

	int arr[10];

	printf("Table for Element:\n");

	for(int i=0;i<10;i++){
	
	    	arr[i]=num*(i+1);
	}
	printf("your table :\n");

	for(int i=0;i<10;i++){
	
	   printf("|%d|",*(arr+i));
	}
	printf("\n");
}
