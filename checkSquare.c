//Program to check a matrix is square or not
#include<stdio.h>
#include<malloc.h>
int main()
	{
	int i,j,r,c;
	int **mat;
	printf("Enter the row & col. of the matrix ");
	scanf("%d%d",&r,&c);
	
	mat=(int **)malloc(r*sizeof(int *));		
												
	for(i=0;i<r;i++)
		mat[i]=(int *)malloc(c*sizeof(int));	
	
	if(r!=c)
		printf("The matrix is not square matrix\n");
	else
	printf("The matrix is square matrix\n");

	return 0;
	}	


