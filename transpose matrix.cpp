#include <stdio.h>
int main()
{
	int matrix[10][10],transpose[10][10];
	int rows,cols,i,j;
	printf("Enter number of row ad columns of the matrix:");
	scanf("%d %d",&rows,&cols);
	printf("Enter the elements of the matrix:\n");
	for(i=0; i<rows; i++)
	{
		for(j=0; j<cols; j++)
		{
			printf("Element[%d][%d]:",i,j);
			scanf("%d", &matrix[i][j]);
		}
	}
	for(i=0; i<rows; i++)
	{
		for(j=0; j<cols; j++)
		{
			transpose[j][i]=matrix[i][j];
		}
	}
	printf("\nTransposed matrix;\n");
	for(i=0; i<cols; i++)
	{
		for(j=0; j<rows; j++)
		{
			printf("%d\t", transpose[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
