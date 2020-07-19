#include<stdio.h>
#include<malloc.h>
void displayarr(int arr[],int len);
int main()
	{
	int *arr,n,i,j,max,min;
	printf("Enter how many numbers you want to store into array");
	scanf("%d",&n);
	
	arr=(int *)malloc((n)*sizeof(int *));	//dynamic allocation of array 'arr' of size 'n'	
	
	printf("Enter %d elements",n);
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	
	max=min=arr[0];
	
	for(i=0;i<n;i++)
		{
		if(max<arr[i])
			max=arr[i];
		if(min>arr[i])
			min=arr[i];
		}
	printf("\nThe elements of the array:");
	displayarr(arr,n);
	printf("\nMax element=%d,Min element=%d",max,min);
	
	return 0;
	}

void displayarr(int arr[],int len)
	{
	int i;
	for(i=0;i<len;i++)
		printf("%d ",arr[i]);

	}
