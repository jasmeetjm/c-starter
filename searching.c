	#include<stdio.h>
	#define ARRAY_SIZE 10
	
	int arr[ARRAY_SIZE]={1,2,4,8,16,32,64,128,256,512};
int linear_search(int num)
{
	int i;
	for(i=0;i<ARRAY_SIZE && arr[i]!=num;i++)
	{
	
	}	
	if(arr[i]==num) {
		return arr[i];
	}
	printf("number not found");
	return -1;
}

int binary_search(int num)
{
	int low=0;
	int high=ARRAY_SIZE-1;
	int mid=(low+high)/2;
	while(num!=arr[mid]) {
		if(num>arr[mid]) {
			low=mid+1;
			mid=(low+high)/2;
		}
		else {
			high=mid-1;
			mid=(low+high)/2;
		}
	}
	if(num==arr[mid]) {
		return arr[mid];
	}
	return -1;
}
	
int main()
{
	printf("%d",linear_search(32));
	printf("%d",binary_search(32));
	return 0;
}

