#include<stdio.h>
#include<malloc.h>
#include<math.h>
void displayMat(int **mat,int r,int c);
void AddMat(int **mat1,int **mat2,int r,int c);
void SubMat(int **mat1,int **mat2,int r,int c);
int main()
	{
	int i,j,r,c,**mat1,**mat2;
	printf("Enter the row & col. for two matrix(Both should be same)");
	scanf("%d%d",&r,&c);
	
	if(r!=c)
		printf("For Addition & Substruction matrix should be square");
	else
		{
		mat1=(int **)malloc(r*sizeof(int *));	
		mat2=(int **)malloc(r*sizeof(int *));	
												
		for(i=0;i<r;i++)
			mat1[i]=(int *)malloc(c*sizeof(int ));	
		
		for(i=0;i<r;i++)
			mat2[i]=(int *)malloc(c*sizeof(int ));	
		
		printf("\n Enter the first matrix \n");
		for(i=0;i<r;i++)
		for(j=0;j<c;j++)				
		scanf("%d",&mat1[i][j]);
		
		printf("\n Enter the second matrix \n");
		for(i=0;i<r;i++)
		for(j=0;j<c;j++)				
		scanf("%d",&mat2[i][j]);
		
		printf("The addtion of two matrix is:\n");
		AddMat(mat1,mat2,r,c);
		
		printf("The substruction of two matrix is:\n");
		SubMat(mat1,mat2,r,c);
		}
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
void AddMat(int **mat1,int **mat2,int r,int c)
	{
	int i,j,**temp;
	temp=(int **)malloc(r*sizeof(int *));	
	
	for(i=0;i<r;i++)
			temp[i]=(int *)malloc(c*sizeof(int ));
			
	for(i=0;i<r;i++)
		{
		for(j=0;j<c;j++)
			{
			temp[i][j]=mat1[i][j]+mat2[i][j];
			printf("%d ",temp[i][j]);
			}
		printf("\n");
		}
	}
void SubMat(int **mat1,int **mat2,int r,int c)
	{
	int i,j,**temp;
	temp=(int **)malloc(r*sizeof(int *));	
	
	for(i=0;i<r;i++)
			temp[i]=(int *)malloc(c*sizeof(int ));
			
	for(i=0;i<r;i++)
		{
		for(j=0;j<c;j++)
			{
			temp[i][j]=mat1[i][j]-mat2[i][j];
			printf("%d ",temp[i][j]);
			}
		printf("\n");
		}
	}
	
