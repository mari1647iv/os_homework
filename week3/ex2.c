#include <stdio.h>
#include <stdlib.h>

void bubble_sort(int arr[], int n);

int main()
{
	int n, *arr;
	scanf("%d", &n);
	arr = (int *) malloc(n*sizeof(int));
	for (int i=0; i<n; i++)
	{
		scanf("%d", arr+i);
	}
	bubble_sort(arr, n);
	for (int i=0; i<n; i++)
	{
		printf("%d ", *(arr+i));
	}
	return 0;
}

void bubble_sort(int *arr, int n)
{
	int i, j; 
	for (i = 0; i < n-1; i++)       
	{
		for (j = 0; j < n-i-1; j++)  
		{
			if (*(arr+j) > *(arr+j+1)) 
			{
				*(arr+j)=*(arr+j)+*(arr+j+1);
				*(arr+j+1)=*(arr+j)-*(arr+j+1);
				*(arr+j)=*(arr+j)-*(arr+j+1);
			} 
		}
	} 
}