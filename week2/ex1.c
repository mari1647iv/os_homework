#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
	int i;
	float f;
	double d;

	i=INT_MAX;
	f=FLT_MAX;
	d=DBL_MAX;

	printf("integer: size - %d, maximum value - %d\n", sizeof(i), i);
	printf("float: size - %d, maximum value - %d\n", sizeof(f), f);
	printf("double: size - %d, maximum value - %d", sizeof(d), d);

	return 0;
}