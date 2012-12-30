	#include<stdio.h>
	#define ARRAY_SIZE 10
	
	int array[ARRAY_SIZE]={12,23,32,4,23,1,45,213,45,223};
int *bubble_sort(int *arr)
{
		int 	i,
			j;
		int count=1;
		int swap=1;	
		for(i=0;i<ARRAY_SIZE-1 && swap;i++) {
			swap=0;
			for(j=0;j<ARRAY_SIZE-1-i;j++) {
				if(arr[j]>arr[j+1]) {
					arr[j]=arr[j]^arr[j+1];
					arr[j+1]=arr[j]^arr[j+1];
					arr[j]=arr[j]^arr[j+1];
					swap=1;
				}
			}
		}

		return arr;
}
int main()
{
	bubble_sort(array);
	int i=0;
	while(i<ARRAY_SIZE) {
		printf("%d\n",array[i]);
		i++;
	}
	return 0;
}
