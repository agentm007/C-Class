#include <stdio.h>

int main()
{
    	unsigned int i=2147483648;

	printf("Unsigned values can be bigger then signed values %u\n",i);
	printf("Make sure to use them as unsigned or you will get odd values %i\n",i);
	return 0;
}
