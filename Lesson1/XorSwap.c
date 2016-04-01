#include <stdio.h>

int main()
{

	int x=5,y=8;

	printf("Value of x is %d value of y is %d\n",x,y);
	x=x^y;
	y=x^y;
	x=x^y;
	printf("Swaped value of x is %d Swaped Value of y is %d\n",x,y);
	printf("The values were swapped with XOR\n");
	printf("It is possible to swap values with out an intermediate value\n");
	return 0;
}
