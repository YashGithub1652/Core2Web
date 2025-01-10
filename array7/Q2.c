#include<stdio.h>
void main(){

        int size;

        printf("Enter the Size of the array:\n");
        scanf("%d",&size);
	
	if(size<0){
	
		printf("Error reenter size\n");
		scanf("%d",&size);
	
	}
        
	int arr[size];

        printf("Enter the Elements of the Array:\n");

        for(int i=0;i<size;i++){

                scanf("%d",&arr[i]);
        }

        printf("2nd Maximum Element of the Array is:\n");

	int max;
	max=arr[0];
	int k=0;

        for(int i=0;i<size;i++){

		if(max<arr[i]){
		
			max=arr[i];
			
			k=i;

		}

        }

	int num;
	num=arr[0];

        for(int i=0;i<size;i++){
		
		if(i!=k){
		
			if(num<arr[i]){
			
				num=arr[i];
			}
		
		}
	
	}
	printf("%d\n",num);
}
