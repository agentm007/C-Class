#include <stdio.h>
#include <string.h>

int main()
{
	char str[] = "Hello World!\n";
	char *pointer;
	char *pointer2;
	int *pointer3;

	pointer = str;
	printf(pointer);

	pointer2 = pointer+2;
	printf(pointer2);

	pointer3 = pointer+1;
	printf(pointer3);

	strcpy(pointer2, "y Sup\n");
	printf(pointer);
	return 0;
}
