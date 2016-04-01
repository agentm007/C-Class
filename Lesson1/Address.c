#include <stdio.h>

int main()
{
	int val = 8;
	int *address;

	address = &val;
	printf("0x%012x\n",address);
	printf("%p\n", &val);
	printf("%d\n", *address);
	return 0;
}
