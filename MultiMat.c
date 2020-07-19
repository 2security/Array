//Program to find the multiplication of two matrix
#include<stdio.h>
#include<malloc.h>
#include<math.h>
void MultiMat(int **mat1,int **mat2,int **temp,int r,int c,int n);
int main()
	{
	int i,j,r,c,m,n,**mat1,**mat2,**temp;
	printf("Enter the row & col. of the first matrix");
	scanf("%d%d",&r,&c);
	
	printf("Enter the row & col. of the second matrix");
	scanf("%d%d",&m,&n);
	
	if(c!=m)
		printf("Multiplication is not possible");
	else
		{
		mat1=(int **)malloc(r*sizeof(int *));	
		mat2=(int **)malloc(r*sizeof(int *));	
		temp=(int **)malloc(r*sizeof(int *));	
												
		for(i=0;i<r;i++)
			mat1[i]=(int *)malloc(c*sizeof(int ));	
		
		for(i=0;i<r;i++)
			mat2[i]=(int *)malloc(c*sizeof(int ));
	
		for(i=0;i<r;i++)
			temp[i]=(int *)malloc(c*sizeof(int ));	
		
		printf("\n Enter the first matrix \n");
		for(i=0;i<r;i++)
		for(j=0;j<c;j++)				
		scanf("%d",&mat1[i][j]);
		
		printf("\n Enter the second matrix \n");
		for(i=0;i<m;i++)
		for(j=0;j<n;j++)				
		scanf("%d",&mat2[i][j]);
		
		printf("The Multiplication of two matrix is:\n");
		MultiMat(mat1,mat2,temp,r,c,n);
		for(i=0;i<r;i++)
			{
			for(j=0;j<n;j++)
			printf("%d ",temp[i][j]);
			printf("\n");	
			}	
		}
	return 0;
	}	

void MultiMat(int **mat1,int **mat2,int **temp,int r,int c,int n)
	{
	int i,j,k;
		
    	for(i=0;i<r;i++)
    		{
    		for(j=0;j<n;j++)
    			{
    			temp[i][j]=0;
    			for(k=0;k<c;k++)
    				temp[i][j]+=mat1[i][k]*mat2[k][j];
    			}
    		}
    	}
