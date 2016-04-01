#include <stdio.h>

int main()
{
	int a=0;
	float b=0.1;
	double c=0.1;
	char d ='A';
	long int e=12;
	long double f=12.3;
	printf("int %lu bytes\n",sizeof(a));
	printf("float %lu bytes\n",sizeof(b));
	printf("double %lu bytes\n",sizeof(c));
	printf("char %lu bytes\n",sizeof(d));
	printf("long int %lu bytes\n", sizeof(e));
	printf("long double %lu bytes\n", sizeof(f));
	return 0;
}
