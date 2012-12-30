#include<stdio.h>
#define ARRAY_SIZE 10

int array[]={10,9,8,7,6,5,4,3,2,1};	
	
int *insertion_sort(int *arr) {
	int 	i,
		j,
		temp,
		min;
	for(i=0;i<ARRAY_SIZE-1;i++) {
		min=i+1;
		temp=arr[min];
		for(j=i;j>=0;--j) {
			if(temp<arr[j]) {
				arr[j+1]=arr[j];
				min=j;
			}
		}
		arr[min]=temp;
	
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
