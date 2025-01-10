#include<stdio.h>
void main(){                                                                                                                                                                                                                                                                                                                    int x;                                                                                                                                                                                                                                                                                                                  printf("Enter the no. of Array:\n");
        scanf("%d",&x);                                                                                                                                                                                                                                                                                                         int arr[x];                                                                                                                                                 int i;                                                                                                                                                                                                                                                                                                                  printf("Array Elements are:\n");
                                                                                                                                                                    for(i=0;i<x;i++){
                                                                                                                                                                            scanf("%d",&arr[i]);                                                                                                                                }              
	
																				    int sum1=0;
																				    int sum2=0;

	int prod;
																				    for(i=0;i<x;i++){
																				    	if(arr[i]%2==0){
																						prod=arr[i]*arr[i];
																						sum1=sum1+prod;
																					}else{
																						prod=arr[i]*arr[i];
																						sum2=sum2+prod;	
	
																					}
																				    }
	
	printf("Difference Between the sum of squares of even and odd is:%d\n",sum2-sum1);

}
