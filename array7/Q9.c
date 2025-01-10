#include<stdio.h>
void main(){

        int size;

        printf("Enter the Size of the array:\n");
        scanf("%d",&size);

        int arr[size];

        printf("Enter the Elements of the Array:\n");

        for(int i=0;i<size;i++){

                scanf("%d",&arr[i]);
        
	}

	printf("Arrays Element in Decending Order:\n");

	for(int i=0;i<size;i++){

		for(int j=0;j<size-1;j++){
	
			if(arr[j]<arr[j+1]){

				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;

			}
		}
	}

	for(int i=0;i<size;i++){
	
		printf("%d\n",arr[i]);
	}
}
