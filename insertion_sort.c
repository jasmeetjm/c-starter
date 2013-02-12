/* insertion sort */

#include<stdio.h>
#define ARRAY_SIZE 10	//declared macros to define ARRAY_SIZE is 10

int array[ARRAY_SIZE]={10,9,8,7,6,5,4,3,2,1};	
	
int *insertion_sort(int *arr) {	
	int 	i,	//variable 1st
		j,	//variable 2nd
		temp,	//temporary variable to store minimum no.
		min;
	for(i=0;i<ARRAY_SIZE-1;i++) {	//Works till all array is sorted
		min=i+1;
		temp=arr[min];		//select temp minimum variable for comparison
		for(j=i;j>=0;--j) {
			if(temp<arr[j]) {	//compare if selected temp is smaller in a loop
				arr[j+1]=arr[j];	
				min=j;
			}
		}
		arr[min]=temp;	// put minimum in it's position
	
		int x;
		for(x=0;x<10;x++) {
			printf("%d\t",arr[x]);	
		}
		printf("\n");
	}	
	return arr;
	}	

int main() {
	insertion_sort(array);
	return 0;
}
