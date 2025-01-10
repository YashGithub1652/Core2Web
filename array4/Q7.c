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

        printf("Strong Element Clarification:\n");

	int flag=0;

	int sum=0;

	int fact=1;

        for(i=0;i<x;i++){
		
		int num=arr[i];

                while(num!=0){

                        int rem=num%10;
				
			fact=1;

			for(int j=1;j<=rem;j++){

				fact=fact*j;

			}

                        num=num/10;

			sum=sum+fact;

			}		

			if(sum==fact){
			
				flag=1;
				break;
			}
	}

	if(flag==1){

	        printf("Array contain Strong Number\n");

	}else{
	
		printf("Array dont contain any strong number\n");
	}
}
