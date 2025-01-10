#include<stdio.h>
void main(){

	int x;

	printf("Enter the size of the Array:\n");
	scanf("%d",&x);

	int arr[x];

	printf("Enter the Elements of the Array:\n");

	for(int i=0;i<x;i++){
	
		scanf("%d",&arr[i]);
	}

	printf("Elements Whose Addition of Digit is Even are:\n");

	for(int i=0;i<x;i++){

	int sum=0;
	int count=0;
	int temp=arr[i];

		while(temp!=0){
	
			int rem=temp%10;
			
			sum=sum+rem;

			if(sum%2==0){
			
				count++;
			}
			
			temp=temp/10;
		}
		
		if(count>0){

			printf("%d\n",arr[i]);
		
		}
	}
}
