#include<stdio.h>
#include<malloc.h>
void displayMat(int **mat,int r,int c);
int CheckSquare(int **mat,int r,int c);
int count=0;
int main()
	{
	int i,j,r,c;
	int **mat;
	printf("Enter the row & col. of the matrix ");
	scanf("%d%d",&r,&c);
	
	mat=(int **)malloc(r*sizeof(int *));		
												
	for(i=0;i<r;i++)
		mat[i]=(int *)malloc(c*sizeof(int));	
					
	printf("\n Enter the matrix \n");
	for(i=0;i<r;i++)
	for(j=0;j<c;j++)
	scanf("%d",&mat[i][j]);
		
	printf("The matrix is:\n");
	displayMat(mat,r,c);
	
	if(CheckSquare(mat,r,c)==1)
		printf("The matrix is sparse matrix\n");
	else
		printf("The matrix is not sparse matrix\n");
	return 0;
	}	
void displayMat(int **mat,int r,int c)
	{
	int i,j;
	for(i=0;i<r;i++)
		{
		for(j=0;j<c;j++)
		printf("%d ",mat[i][j]);
	   	printf("\n");
	   	}
	}
int CheckSquare(int **mat,int r,int c)
	{
	if(count>(r*c)/2)
		return 1;
	else
		return 0;	
	}
