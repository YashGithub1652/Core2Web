#include<stdio.h>
void main(){

	int x;

	printf("Enter the Size of the array:\n");
	scanf("%d",&x);

	int arr[x];

	printf("Enter the Element of the Array:\n");

	for(int i=0;i<x;i++){
	
		scanf("%d",&arr[i]);
	}

	int sum;

	printf("Enter the Sum to be determined:\n");
	scanf("%d",&sum);

	int flag=0;

	for(int i=0;i<x;i++){

		for(int j=i+1;j<x;j++){
		
			if(arr[i]+arr[j]==sum){
			
				printf("%d & %d\n",i,j);
	
				flag=1;				
	
				break;
			}
		}
	if(flag==1){
		
		break;
	}
		
	}
}
