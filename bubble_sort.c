/* to sort a given set through bubble sort */

	#include<stdio.h>
	#define ARRAY_SIZE 10	//macros to declare ARRAY_SIZE is a representation of 10
	
	int array[ARRAY_SIZE]={12,23,32,4,23,1,45,213,45,223};	//any given set of array
int *bubble_sort(int *arr)	//function to sort numbers
{
		int 	i,	//variables
			j;	
		int swap=1;	//act as flag	
		for(i=0;i<ARRAY_SIZE-1 && swap;i++) {	//if flag is true only then it will work
			swap=0;				//flag is unset so that it again has to satisfy to come in loop	
			for(j=0;j<ARRAY_SIZE-1-i;j++) {
				if(arr[j]>arr[j+1]) {		//to swap 2 no's
					arr[j]=arr[j]^arr[j+1];
					arr[j+1]=arr[j]^arr[j+1];
					arr[j]=arr[j]^arr[j+1];
					swap=1;		//if no.'s are swapped only then it works in loop
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
