#include <stdio.h>
#include <time.h>

int main()
{
	time_t startsec, endsec;
	int i;
	startsec = time(NULL);
	for(i=0;i<1000000;i++)
	{
		printf("%d\n", i);
	}

	endsec = time(NULL) - startsec;
	printf("%ld", endsec);
	return 0;
}
