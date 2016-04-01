#include <stdio.h>
#include <string.h>

int main()
{

	printf("The long way ");
	char hello[7];
	hello[0] = 'h';
	hello[1] = 'e';
	hello[2] = 'l';
	hello[3] = 'l';
	hello[4] = 0;
	hello[5] = 'o';
	hello[6] = '\n';

	printf(hello);
	printf("\n");

	printf("The shorter way ");
	char hello2[7];
	strcpy(hello2, "Hello\n");
	printf(hello2);


	printf("The shortest way ");
	char hello3[] = "Hello World!\n";
	printf("%s",hello3);
	return 0;
}
