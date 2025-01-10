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

        printf("Maximum Element and Minimum of the Array is:\n");

        int max;
	int min;
        max=arr[0];
	min=arr[0];

        for(int i=1;i<size;i++){

                if(max<arr[i]){

                        max=arr[i];
                }else if(min>arr[i]){
		
			min=arr[i];
		}
        }

        printf("%d and %d\n",max,min);
}
