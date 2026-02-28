#include <stdio.h>
int sumofdigits(int n)
{
	if(n==0)
	return 0;
	else
		return(n%10)+sumofdigits(n/10);
}
int main()
{
	int num;
	printf("Enter a number:");
	scanf("%d",&num);
	if (num<0){
		num=-num;
	}
	int result=sumofdigits(num);
	printf("Sum of digits of %d is %d\n",num,result);
	return 0;
}
