#include<stdio.h>
void main()
{
	int i,j,k,m[10][10],n[10][10],mult[10][10],sum=0;
	printf("enter the matrix A1:");
	for(i=0;i<3;i++)      // For First matrix
	{
		
		for(j=0;j<3;j++)
		{
			scanf("%d",&m[i][j]);
		}
	}
	printf("Display the matrix A1:\n");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",m[i][j]);
		}
		printf("\n");
	}

	printf("enter the matrix A2:");
	for(i=0;i<3;i++)	//For Second matrix
	{
		
		for(j=0;j<3;j++)
		{
			scanf("%d",&n[i][j]);
		}
	}
	
	printf("Display the matrix A2:\n");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",n[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<3;i++)//Displaying final matrix
	{
		for(j=0;j<3;j++)
		{
			sum=0;			
			for(k=0;k<3;k++)
			{
				sum=sum+m[i][k]*n[k][j];
			}
			mult[i][j]=sum;
		}
	}
	printf("Matrix Multiplication is given by:-\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",mult[i][j]);
		}
		printf("\n");
	}
}
