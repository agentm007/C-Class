#include <stdio.h>

int main()
{
	char name[60];
	printf("Hello Enter your First name\n");
	scanf("%s", name);

	char lastName[4];
	printf("Hello Enter your last name\n");
	scanf("%s", lastName);


	printf("Your first name is %s\n",name);
	printf("Your last name is %s\n",lastName);
	return 0;
}
