#include <stdio.h>
void readmat(int r, int c,int matrix[r][c],int x)
{
	printf("Enter the elements of matrix %d: ",x);
	for(int i=0; i<r; i++)
	{	for(int j=0; j<c; j++)	
		{scanf("%d",(*(matrix+i)+j));}
	}
}

void printmat(int r, int c,int matrix[r][c],int x)
{
	printf("Elements of matrix %d are: \n",x);
	for(int i=0; i<r; i++)
	{	printf("\n");
		for(int j=0; j<c; j++)	
		printf("%d ---> %d    ",*(*(matrix+i)+j),(*(matrix+i)+j));
	}
}

void addmat(int r, int c,int matrix1[r][c], int matrix2[r][c], int result[r][c])
{	
	for(int i=0; i<r; i++)
	{	for(int j=0; j<c; j++)	
		*(*(result+i)+j)=*(*(matrix1+i)+j) + *(*(matrix2+i)+j);
	}	
}



int main()
{
	int r1,c1,r2,c2;
	printf("\nEnter the rows of matrix 1: ");
		scanf("%d",&r1);
	printf("\nEnter the columns of matrix 1: ");
		scanf("%d",&c1);
	int matrix1[r1][c1];
	readmat(r1,c1,matrix1,1);

	printf("\nEnter the rows of matrix 2: ");
		scanf("%d",&r2);
	printf("\nEnter the columns of matrix 2: ");
		scanf("%d",&c2);

	while (r1!=r2 || c1!=c2)
	{	printf("Rows and Columns of both matrices are unequal\n");
		printf("\nEnter the rows of matrix 2: ");
		scanf("%d",&r2);
	    printf("\nEnter the columns of matrix 2: ");
		scanf("%d",&c2);
	}		
	int matrix2[r2][c2];
	readmat(r2,c2,matrix2,2);

	int result[r1][c1];
	addmat(r1, c1, matrix1, matrix2, result);
	printf("\nElements of result matrix are: \n");
	for(int i=0; i<r1; i++)
	{	printf("\n");
		for(int j=0; j<c1; j++)	
		printf("%d ",*(*(result+i)+j));
	}	

	return 0;
}