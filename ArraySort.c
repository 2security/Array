#include<stdio.h>
#include<malloc.h>
void displayarr(int arr[],int len);
void removeDuplicates(int arr[],int n);
int main()
	{
	int *arr,i,n,sum=0;
	printf("Enter how many numbers you want to store into array");
	scanf("%d",&n);
	
	arr=(int *)malloc((n)*sizeof(int *));	//dynamic allocation of array 'arr' of size 'n'	
	
	printf("\nEnter %d elements",n);
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	
	removeDuplicates(arr,n);
	
	printf("\nAfter removing duplicates: ");
	displayarr(arr,n);
	return 0;
	}
void removeDuplicates(int arr[],int n)
	{
	int i,j,temp;
	
	}
void displayarr(int arr[],int len)
	{
	int i;
	for(i=0;i<len;i++)
		printf("%d ",arr[i]);

	}
