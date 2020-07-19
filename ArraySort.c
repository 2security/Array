//Program of sorting the array
#include<stdio.h>
#include<malloc.h>
void displayarr(int *arr,int len);
void sort(int *arr,int n);
int main()
	{
	int *arr,i,n,sum=0;
	printf("Enter how many numbers you want to store into array");
	scanf("%d",&n);
	
	arr=(int *)malloc((n)*sizeof(int *));	//dynamic allocation of array 'arr' of size 'n'	
	
	printf("\nEnter %d elements",n);
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	
	sort(arr,n);
	
	printf("\nAfter sorting ");
	displayarr(arr,n);
	return 0;
	}
void sort(int *arr,int n)
	{
	int i,j,temp;
	for(i=0;i<n-1;i++)
		{
		for(j=0;j<n-1-i;j++)
			{
			if(arr[j]>arr[j+1])
				{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				}
			}
		}
	}
void displayarr(int *arr,int len)
	{
	int i;
	for(i=0;i<len;i++)
		printf("%d ",arr[i]);

	}
