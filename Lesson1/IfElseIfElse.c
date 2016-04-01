#include <stdio.h>

int main()
{
int i = 1;
int j = 0;
	if(i)
	{
		printf("%d equals true\n", i);
	}

	if(j)
	{
		printf("This statment will never run\n");
	}

	else
	{
		printf("%d equals false\n", j);
	}


	if(i+j == 0)
	{
		printf("Never going to Happen");
	}

	else if(i+j == 1)
	{
		printf("%d + %d = %d\n", i, j, i+j);
	}

	else
	{
		printf("Not Happening\n");
	}

	if(-1)
	{
		printf("Negative Values are also true!\n");
	}

	return 0;
}
