#include <stdio.h>

int main()
{
	int array[100],n, i,largest,smallest;
	printf("Enter the size of array: ");
	scanf("%d" , &n);
	printf("Enter %d elements:\n", n);
	for(i =0; i < n; i++)
	{
		scanf("%d",&array[i]);
	}
	largest =smallest = array[0];
	for(i =1; i < n; i++)
	{
		if(array[i] > largest)
		  largest = array[i];
		if(array[i] < smallest)
          smallest =array[i];		
	}
    printf("Largest element: %d\n", largest);
    printf("Smallest element: %d\n" , smallest);
    return 0;
}
    
