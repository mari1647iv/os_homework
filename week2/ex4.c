#include <stdio.h>

void swap(int* a, int* b);

int main()
{
	int a, b;
	printf("print a: ");
	scanf(" %d",&a);
	printf("print b: ");
	scanf(" %d",&b);
	
	swap(&a, &b);
	printf("a = %d, b = %d", a, b);
	
	return 0;
}

void swap(int* a, int* b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}