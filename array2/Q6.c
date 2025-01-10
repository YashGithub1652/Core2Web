#include<stdio.h>
void main(){

        int x;

        printf("Enter the no. of students:\n");
        scanf("%d",&x);

        float arr[x];
        int i;

        printf("Enter the height of the array:\n");

        for(i=0;i<x;i++){
		
		scanf("%f",&arr[i]);
		
		if(arr[i]<5.5 || arr[i]>6.0){
			
			printf("Entered height is  invalid Reenter height\n");

			scanf("%f",&arr[i]);

			}

                }

        printf("students height are:\n");
	
	for(i=0;i<x;i++){
		
		printf("%f\n",arr[i]);
	}
}
