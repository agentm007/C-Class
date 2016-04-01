#include <stdio.h>
void swap(int, int);

int main()
{
	int x, y;
	printf("Enter in an intiger value for x and hit enter\n");
	scanf("%d", &x);
	printf("Enter in an intiger value for y and hit enter\n");
	scanf("%d", &y);
	swap(x,y);


	return 0;
}



void swap(int a, int b)
{
	printf("First value is %d\n", a);
	printf("Second value is %d\n",b);

	a=a^b;
	b=a^b;
	a=a^b;
	printf("First swaped value is %d\n",a);
	printf("Second swaped value is %d\n",b);

}
