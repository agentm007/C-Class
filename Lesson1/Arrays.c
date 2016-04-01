#include <stdio.h>

int main()
{
	int someInts[10];

	someInts[5] = 7;

	int someMoreInts[] = {11, 11.5, 11.456};
	printf("Int at spot 6 is %d the value at 1 is %d \n", someInts[5], someInts[0]);
	int i = 0;

	for(i; i<4; i++)
	{
		printf("%d\n", someMoreInts[i]);
	}

	return 0;
}
