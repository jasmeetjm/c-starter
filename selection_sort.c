#include<stdio.h>
#define ARRAY_SIZE 10
//int array[]={10,9,8,7,6,5,4,3,2,1};
	int array[]={1,34,345,134,43,45,134,65,213,75};

int *sel_sort(int *arr)
{
	int	i,j,x,
		min,
		index,
		count=0;
	for(i=0;i<ARRAY_SIZE;i++) {
		min=arr[i];
		index=i;
		for(j=i+1;j<(ARRAY_SIZE);j++) {
			if(min>arr[j]) {
				min=arr[j];
				index=j;  
			}
		}
		
		if(min!=arr[i]) {
			arr[i]=arr[i]^arr[index];
			arr[index]=arr[i]^arr[index];
			arr[i]=arr[i]^arr[index];
			count++;	
		}	
	}
	
	for(x=0;x<10;x++) {
		printf("%d\t",arr[x]);
	}
	
	printf("\npass=%d\n",count);
	
	return arr;
}
	
int main()
{
	sel_sort(array);
	return 0;
}


