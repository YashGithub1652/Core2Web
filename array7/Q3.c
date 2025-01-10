#include<stdio.h>
void main(){

        int x;

        printf("Enter the Size of the array:\n");
        scanf("%d",&x);

        int arr[x];

        printf("Enter the Elements of the Array:\n");

        for(int i=0;i<x;i++){

                scanf("%d",&arr[i]);
        }

        printf("1st Reapeating Element of the Array is:\n");

        for(int i=0;i<x;i++){

		for(int j=i+1;j<x;j++){

                	if(arr[i]==arr[j]){
				
                        	printf("%d\n",arr[i]);
				
				break;
                	}
		}

	}
}
