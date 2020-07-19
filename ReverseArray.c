//Program to reverse the array
#include<stdio.h>
#include<malloc.h>
void displayarr(int arr[],int len);
int main()
	{
	int *arr,temp,n,i,j;
	printf("Enter how many numbers you want to store into array");
	scanf("%d",&n);
	
	arr=(int *)malloc(n*sizeof(int *));	//dynamic allocation of array 'arr' of size 'n'
	
	printf("Enter %d elements",n);
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);		
	
	printf("Original array: ");
	displaymatrix(arr,n);
	
	for(i=n-1,j=0;i>j;i--,j++)		//swap
		{
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
		}
	
	printf("\nReversed array: ");
	displaymatrix(arr,n);			//display array
	return 0;
	}

void displayarr(int arr[],int len)
	{
	int i;
	for(i=0;i<len;i++)
		printf("%d ",arr[i]);
	}
	
	
