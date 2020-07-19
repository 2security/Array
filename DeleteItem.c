//Program to delete an item from the array
#include<stdio.h>
#include<malloc.h>
void displayarr(int arr[],int len);
int main()
	{
	int *arr,temp,n,i,j,item;
	printf("Enter how many numbers you want to store into array");
	scanf("%d",&n);
	
	arr=(int *)malloc((n)*sizeof(int *));	//dynamic allocation of array 'arr' of size 'n'	
	
	printf("Enter %d elements",n);
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	
	printf("Enter the item to be deleted");
	scanf("%d",&item);
	
	for(i=0;i<n;i++)			//searching the element in the array
		if(arr[i]==item)
			break;
	if(i<n)				//if item is present in array
		{
		n=n-1;
		for(j=i;j<n;j++)
			arr[j]=arr[j+1];
			
		displaymatrix(arr,n);
		}
	else
		printf("%d is not found",item);
		
	return 0;
	}

void displayarr(int arr[],int len)
	{
	int i;
	printf("After delete operation the array is:\n");
	for(i=0;i<len;i++)
		printf("%d ",arr[i]);

	}
