#include<stdio.h>
void main(){

	int x;

	printf("Enter the no. of Students:\n");
	scanf("%d",&x);

	int arr[x];
	int i;

	printf("Enter the ID of the Students:\n");

	for(i=0;i<x;i++){
	
		scanf("%d",&arr[i]);
	
	}

	printf("Present Students are:\n");

	for(i=0;i<x;i++){
	
		printf("%d\n",arr[i]);

	}

	int IDSearch;
	int flag=0;

	printf("ID to be searched is:\n");
	scanf("%d",&IDSearch);

	for(i=0;i<x;i++){
	
		if(IDSearch==arr[i]){
		
			printf("Student ID No.%d found at %d\n",IDSearch,i);
			
			flag=1;

		}
	
	}

	if(flag=0){

		printf("ID not found\n");
	}
}
