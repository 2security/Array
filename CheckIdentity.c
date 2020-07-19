#include<stdio.h>
#include<malloc.h>
#include<math.h>
int checkIdentity(int **mat,int r,int c);
int main()
	{
	int i,j,r,c,**mat1,**mat2;
	printf("Enter the row & col. for the matrix");
	scanf("%d%d",&r,&c);
	mat1=(int **)malloc(r*sizeof(int *));	
	mat2=(int **)malloc(r*sizeof(int *));									
	
	for(i=0;i<r;i++)
		mat1[i]=(int *)malloc(c*sizeof(int ));
		
	for(i=0;i<r;i++)
		mat2[i]=(int *)malloc(c*sizeof(int ));
			

	printf("\n Enter the matrix \n");
	for(i=0;i<r;i++)
	for(j=0;j<c;j++)				
	scanf("%d",&mat1[i][j]);
		
	if(checkIdentity(mat1,r,c)==1)
		printf("Matrix is identity matrix of order %d",r);
	else
		printf("Matrix is not identity matrix");
		
	return 0;
	}
int checkIdentity(int **mat,int r,int c)
	{
	int i,j;
	for(i=0;i<r;i++)
		{
		for(j=0;j<c;j++)
			{
			if((i!=j)&&(mat[i][j]!=0))
				return 0;
			else if((i==j)&&(mat[i][j])!=1)
				return 0;
			}
		}
	return 1;
	}	
