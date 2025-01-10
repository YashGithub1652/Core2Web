#include<stdio.h>
void main(){
	
	int x;
	 printf("Enter the no. of array:\n");
	 scanf("%d",&x);

	 int arr[x];
	 int i;
	 int even=0;
	 int odd=0;
	 int count;

	 printf("Enter the elements of array:\n");
	   	
	 	for(i=0;i<x;i++){
		    scanf("%d",&arr[i]);
		}

	 for(i=0;i<x;i++){
	 	
		 if(i%2==0){
		     even=even+arr[i];
		 }else{
                     odd=odd+arr[i];	
		 }
	 }

	 printf("Even count:%d\n",even);
	 printf("Odd count:%d\n",odd);
	 printf("Difference between the even element and odd element of the array is:%d\n",count=even-odd);
}
