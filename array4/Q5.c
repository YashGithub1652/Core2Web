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

        printf("Count of Each ELement of the array is:\n");
	
	for(i=0;i<x;i++){

	int count=0;
	
		while(arr[i]!=0){
	
			int rem=arr[i]%10;

				count++;

			arr[i]=arr[i]/10;
	
			}

		printf("%d\n",count);
	}

}
