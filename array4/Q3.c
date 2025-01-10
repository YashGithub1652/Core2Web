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

	int count=0;
	

        for(i=0;i<x;i++){
	int sum=0;

                for(int j=1;j<=arr[i];j++){

                        if(arr[i]%j==0){

                                sum=sum+j;
 		        }
			
		}
		
		if(arr[i]==sum){

			count++;
		}
	}

	if(count>=1){
	
		printf("Array contains Perfect Elements\n");
	}else{
	
		printf("Array dont contain any Perfect Element\n");
	}
}
