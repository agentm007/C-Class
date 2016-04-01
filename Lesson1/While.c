#include <stdio.h>


int main()
{
	int a=5, b=0;

	while(a>b)
	{
		printf("%d is > %d \n",a, b);
		b++;
	}


	do
	{
		printf("do while will run at least once.\n");
		b++;
	}while(b==a);
	return(0);
}
