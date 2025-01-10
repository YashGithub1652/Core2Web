#include<stdio.h>
void main(){

	int x;

	printf("Enter the no. of Array:\n");
	scanf("%d",&x);

	int arr[x];
	

	printf("Array Element are:\n");

	for(int i=0;i<x;i++){
	
		scanf("%d",&arr[i]);
	}

	printf("Printing Even ELement in Array1 and Odd in Array2:\n");

	int evencount=0;
	int oddcount=0;

	for(int i=0;i<x;i++){
	
		if(arr[i]%2==0){
		
			evencount++;
		}else{
		
			oddcount++;
		}
	
	}

	int arr1[evencount];
	int arr2[oddcount];

	printf("Array1 Element are:\n");

	int k =0,l=0;

	for(int i=0;i<x;i++){

		

		if(arr[i]%2==0){
	
			arr1[k]=arr[i];
				
			k++;
			printf("1\n");
		}else{
			arr2[l]=arr[i];
			l++;
		}
		
	}
	


	

		for(int j=0;j<oddcount;j++){

        	        
        	                printf("%d\n",arr2[j]);
		
                	
		}
        

}
