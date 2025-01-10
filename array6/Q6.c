#include<stdio.h>
void main(){

	int start;
	int end;

	printf("Enter the Values for Start and End:\n");
	scanf("%d %d",&start,&end);

	int range;

	if(start>end){
	range=start-end;
	}else if(end>start){
	range=end-start;
	}

	int arr[range];
	int count=0;

	printf("Enter the Elements of the Array:\n");
	
	for(int i=0;i<range;i++){
	
		scanf("%d",&arr[i]);
	}

	printf("Elements Falling in the Range are:\n");

	for(int i=0;i<range;i++){
	
		if(start>end){

	 		if(arr[i]<start&&arr[i]>end){
		
				printf("%d\n",arr[i]);

			}	else{
		
				count++;
			}
		}else if(start<end){
		
			if(arr[i]>start&&arr[i]<end){

                                printf("%d\n",arr[i]);

                        }       else{

                                count++;
                        }
			
		}
	}

	if(count>0){
	
		printf("None\n");
	}
}
