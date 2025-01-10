#include<stdio.h>
void main(){

        int x;

        printf("Enter the no. of the array:\n");
        scanf("%d",&x);

        int arr[x];
        int i;

        printf("Enter the array Elements:\n");

        for(i=0;i<x;i++){

                scanf("%d",&arr[i]);

        }

        printf("Palindrome number Clarification:\n");

	int flag=0;

	for(i=0;i<x;i++){

	int val=arr[i];
	int temp=0;

		while(val>0){
		
			int rem=val%10;
			temp=rem+temp*10;
			val/=10;
		
		}

	if(temp==arr[i]){
	
		flag=1;
	}
	
	}

	if(flag==1){
	
		printf("Array contain Palindrome Number\n");
	}else{
	
		printf("Array dont contain any Palindrome Number\n");
	}

}
