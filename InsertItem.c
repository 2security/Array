//Program to insert an item in a specific position into the array
#include<stdio.h>
#include<malloc.h>
void displayarr(int arr[],int len);
int main()
	{
	int *arr,temp,n,i,j,pos,item;
	printf("Enter how many numbers you want to store into array");
	scanf("%d",&n);
	
	printf("Enter the position where you want to insert an item");
	scanf("%d",&pos);
	
	printf("Enter the item to be inserted");
	scanf("%d",&item);
	
	arr=(int *)malloc((n)*sizeof(int *));	//dynamic allocation of array 'arr' of size 'n'
	
	printf("Enter %d elements",n);
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);					
	
	for(i=n-1;i>=pos-1;i--)
		arr[i+1]=arr[i];		//Shifting the elements to the right
	arr[pos-1]=item;			//Insert item in to the position
	
	displaymatrix(arr,n+1);
	
	return 0;
	}
void displayarr(int arr[],int len)
	{
	int i;
	for(i=0;i<len;i++)
		printf("%d ",arr[i]);
	}
	
	
