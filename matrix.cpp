#include <stdio.h>
int main()
{
	int matrix[10][10], transpose[10][10];
	int rose, cols, i, j;
	printf("Enter the no. of rows and colums of the matrix:")
	scanf("%d %d", &rows,&cols);
	printf("Enter elements of matrix:\n")
	for(i=0; i<rows; i++)
	{
		for(j=0; j<cols; j++)
	    {
	    	transpose[j][i] = matrix[i][j];
	    }
    }
    printf("\n Transpose matrix\n");
    for(i=0; i<cols i++)
    {
    	for(j=0; j<rows; j++)
	}
	{
		printf("%d\t", transpose[i][j]);
	}
	printf("\n");
    }
